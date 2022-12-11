import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function unshiftPrototypeDependencies(_typename: string): string[] {
  return [];
}

export function unshiftPrototype(
  typename: string,
  originalType = typename
): string {
  return `t_err\tft_types_slist_${typename}_unshift(
\t\t\tt_ft_types_slist_${typename} *list,
\t\t\t${originalType} value);`;
}

export async function emitUnshift(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_unshift.c`,
    `${header}
${includes('"wrap.h"', `"ft_types_slist_${typename}.h"`, ...dependencies)}

t_err\tft_types_slist_${typename}_unshift(
\tt_ft_types_slist_${typename} *list,
\t${originalType} value
)
{
${variableDecls([{ type: `t_ft_types_slist_${typename}_node`, name: "*node" }])}

\tnode = wrap_malloc(sizeof(t_ft_types_slist_${typename}));
\tif (!node)
\t\treturn (true);
\tnode->next = list->head;
\tnode->value = value;
\tif (!list->head)
\t\tlist->tail = node;
\tlist->head = node;
\tlist->length++;
\treturn (false);
}
`
  );
}
