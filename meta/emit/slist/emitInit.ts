import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function initPrototypeDependencies(_typename: string): string[] {
  return [];
}

export function initPrototype(typename: string): string {
  return `void\tft_types_slist_${typename}_init(
\t\t\tt_ft_types_slist_${typename} *list);`;
}

export async function emitInit(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_init.c`,
    `${header}
${includes("<stdlib.h>", `"ft_types_slist_${typename}.h"`, ...dependencies)}

void\tft_types_slist_${typename}_init(
\tt_ft_types_slist_${typename} *list
)
{
\tlist->head = NULL;
\tlist->tail = NULL;
\tlist->length = 0;
}
`
  );
}
