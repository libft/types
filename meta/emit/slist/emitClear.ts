import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function clearPrototypeDependencies(_typename: string): string[] {
  return [];
}

export function clearPrototype(typename: string): string {
  return `void\tft_types_slist_${typename}_clear(
\t\t\tt_ft_types_slist_${typename} *list);`;
}

export async function emitClear(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_clear.c`,
    `${header}
${includes("<stdlib.h>", `"ft_types_slist_${typename}.h"`, ...dependencies)}

void\tft_types_slist_${typename}_clear(
\tt_ft_types_slist_${typename} *list
)
{
${variableDecls([
  { type: `t_ft_types_slist_${typename}_node`, name: "*node_to_free" },
])}

\twhile (list->head)
\t{
\t\tnode_to_free = list->head;
\t\tlist->head = node_to_free->next;
\t\tfree(node_to_free);
\t}
\tlist->tail = NULL;
}
`
  );
}
