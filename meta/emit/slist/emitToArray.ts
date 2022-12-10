import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function toArrayPrototypeDependencies(typename: string): string[] {
  return ['"ft_types.h"', `"ft_types_array_${typename}.h"`];
}

export function toArrayPrototype(typename: string): string {
  return `t_err\tft_types_slist_${typename}_to_array(
\t\t\tt_ft_types_slist_${typename} *list,
\t\t\tt_ft_types_array_${typename} *out);`;
}

export async function emitToArray(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_to_array.c`,
    `${header}
${includes(
  "<stdlib.h>",
  '"ft_types.h"',
  '"ft_memory.h"',
  `"ft_types_array_${typename}.h"`,
  `"ft_types_slist_${typename}.h"`,
  ...dependencies
)}

t_err\tft_types_slist_${typename}_to_array(
\tt_ft_types_slist_${typename} *list,
\tt_ft_types_array_${typename} *out
)
{
${variableDecls([
  { type: `t_ft_types_array_${typename}`, name: "result" },
  { type: `t_ft_types_slist_${typename}_node`, name: "*node" },
  { type: "size_t", name: "i" },
])}

\tresult.element = ft_memory_allocate(
\t\t\tlist->length,
\t\t\tsizeof(${originalType}));
\tif (!result.element)
\t\treturn (true);
\tresult.count = list->length;
\ti = 0;
\tnode = list->head;
\twhile (node)
\t{
\t\tresult.element[i] = node->value;
\t\ti++;
\t\tnode = node->next;
\t}
\t*out = result;
\treturn (false);
}
`
  );
}
