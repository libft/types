import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function shiftPrototypeDependencies(_typename: string): string[] {
  return ['"ft_types.h"'];
}

export function shiftPrototype(
  typename: string,
  originalType = typename
): string {
  return `bool\tft_types_slist_${typename}_shift(
\t\t\tt_ft_types_slist_${typename} *list,
\t\t\t${originalType} *out);`;
}

export async function emitShift(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_shift.c`,
    `${header}
${includes(
  "<stdlib.h>",
  '"ft_types.h"',
  `"ft_types_slist_${typename}.h"`,
  ...dependencies
)}

bool\tft_types_slist_${typename}_shift(
\tt_ft_types_slist_${typename} *list,
\t${originalType} *out
)
{
${variableDecls([{ type: `t_ft_types_slist_${typename}_node`, name: "*node" }])}

\tif (!list->head)
\t\treturn (false);
\tnode = list->head;
\tlist->head = node->next;
\tif (!list->head)
\t\tlist->tail = NULL;
\tlist->length--;
\t*out = node->value;
\tfree(node);
\treturn (true);
}
`
  );
}
