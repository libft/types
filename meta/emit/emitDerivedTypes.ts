import { promises as fs } from "fs";
import { header } from "../common/header";
import {
  headerProtectionEnd,
  headerProtectionStart,
} from "../common/headerProtection";
import { primitiveTypes } from "../common/primitiveTypes";
import { includesInHeader } from "../util/includes";
import { Field, variableDecls } from "../util/variableDecls";

export async function emitDerivedTypes(): Promise<void> {
  await fs.mkdir("src/ft/types", { recursive: true });
  await fs.writeFile(
    "src/ft/types/ft_types_derived.h",
    `${header}
${headerProtectionStart("ft_types_derived")}
${includesInHeader('"ft_types.h"')}

${variableDecls(
  primitiveTypes.flatMap<Field>((t) => [
    { name: `*t_p${t}`, type: `typedef t_${t}` },
    { name: `(*t_func_${t}_p)(void *context)`, type: `typedef t_${t}` },
    { name: `*(*t_func_p${t}_p)(void *context)`, type: `typedef t_${t}` },
    {
      name: `(*t_func_${t}_${t}_p)(t_${t} v, t_p c)`,
      type: `typedef t_${t}`,
    },
    {
      name: `(*t_func_p${t}_${t}_p)(t_${t} v, t_p c)`,
      type: `typedef t_p${t}`,
    },
    {
      name: `(*t_func_${t}_p${t}_p)(t_p${t} v, t_p c)`,
      type: `typedef t_${t}`,
    },
    {
      name: `(*t_func_p${t}_p${t}_p)(t_p${t} v, t_p c)`,
      type: `typedef t_p${t}`,
    },
  ])
)
  .split("\n")
  .map((line) => line.slice(1))
  .join("\n")}

${headerProtectionEnd}
`
  );
}

export const allTypes = primitiveTypes.flatMap<string>((t) => [
  `${t}`,
  `p${t}`,
  `func_${t}_p`,
  `func_p${t}_p`,
  `func_${t}_${t}_p`,
  `func_p${t}_${t}_p`,
  `func_${t}_p${t}_p`,
  `func_p${t}_p${t}_p`,
]);
