import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function pushPrototypeDependencies(_typename: string): string[] {
  return ['"ft_types.h"'];
}

export function pushPrototype(
  typename: string,
  originalType = typename
): string {
  return `t_err\tft_types_slist_${typename}_push(
\t\t\tt_ft_types_slist_${typename} *list,
\t\t\t${originalType} value);`;
}

export async function emitPush(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_push.c`,
    `${header}
${includes(
  "<stdlib.h>",
  '"ft_types.h"',
  `"ft_types_slist_${typename}.h"`,
  ...dependencies
)}

t_err\tft_types_slist_${typename}_push(
\tt_ft_types_slist_${typename} *list,
\t${originalType} value
)
{
${variableDecls([{ type: `t_ft_types_slist_${typename}_node`, name: "*node" }])}

\tnode = malloc(sizeof(t_ft_types_slist_${typename}));
\tif (!node)
\t\treturn (true);
\tnode->next = NULL;
\tnode->value = value;
\tif (list->tail)
\t\tlist->tail->next = node;
\telse
\t\tlist->head = node;
\tlist->tail = node;
\tlist->length++;
\treturn (false);
}
`
  );
}
