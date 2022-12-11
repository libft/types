import { promises as fs } from "fs";
import { header } from "../../common/header";
import { includes } from "../../util/includes";
import { variableDecls } from "../../util/variableDecls";

export function fromArrayPrototypeDependencies(typename: string): string[] {
  return [`"ft_types_array_${typename}.h"`];
}

export function fromArrayPrototype(typename: string): string {
  return `t_err\tft_types_slist_${typename}_from_array(
\t\t\tt_ft_types_array_${typename} *array,
\t\t\tt_ft_types_slist_${typename} *out);`;
}

export async function emitFromArray(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}_from_array.c`,
    `${header}
${includes(
  "<stdlib.h>",
  `"ft_types_array_${typename}.h"`,
  `"ft_types_slist_${typename}.h"`,
  ...dependencies
)}

t_err\tft_types_slist_${typename}_from_array(
\tt_ft_types_array_${typename} *array,
\tt_ft_types_slist_${typename} *out
)
{
${variableDecls([
  { type: `t_ft_types_slist_${typename}`, name: "result" },
  { type: "size_t", name: "i" },
])}

\tft_types_slist_${typename}_init(&result);
\ti = -1;
\twhile (++i < array->count)
\t{
\t\tif (ft_types_slist_${typename}_push(&result, array->element[i]))
\t\t{
\t\t\tft_types_slist_${typename}_clear(&result);
\t\t\treturn (true);
\t\t}
\t}
\t*out = result;
\treturn (false);
}
`
  );
}
