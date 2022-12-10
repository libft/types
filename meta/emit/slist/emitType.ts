import { promises as fs } from "fs";
import { header } from "../../common/header";
import {
  headerProtectionEnd,
  headerProtectionStart,
} from "../../common/headerProtection";
import { includesInHeader } from "../../util/includes";
import { typedef } from "../../util/typedef";
import { clearPrototype, clearPrototypeDependencies } from "./emitClear";
import {
  fromArrayPrototype,
  fromArrayPrototypeDependencies,
} from "./emitFromArray";
import { initPrototype, initPrototypeDependencies } from "./emitInit";
import { pushPrototype, pushPrototypeDependencies } from "./emitPush";
import { toArrayPrototype, toArrayPrototypeDependencies } from "./emitToArray";

export async function emitType(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await fs.mkdir("src/ft/types/slist", { recursive: true });
  await fs.writeFile(
    `src/ft/types/slist/ft_types_slist_${typename}.h`,
    `${header}
${headerProtectionStart(`ft_types_slist_${typename}`)}
${includesInHeader(
  "<stddef.h>",
  ...initPrototypeDependencies(typename),
  ...clearPrototypeDependencies(typename),
  ...toArrayPrototypeDependencies(typename),
  ...fromArrayPrototypeDependencies(typename),
  ...pushPrototypeDependencies(typename),
  ...dependencies
)}

${typedef(`ft_types_slist_${typename}_node`, [
  { type: `struct s_ft_types_slist_${typename}_node`, name: "*next" },
  { type: originalType, name: "value" },
])}

${typedef(`ft_types_slist_${typename}`, [
  { type: `t_ft_types_slist_${typename}_node`, name: "*head" },
  { type: `t_ft_types_slist_${typename}_node`, name: "*tail" },
  { type: "size_t", name: "length" },
])}

${initPrototype(typename)}
${clearPrototype(typename)}
${toArrayPrototype(typename)}
${fromArrayPrototype(typename)}
${pushPrototype(typename, originalType)}

${headerProtectionEnd}
`
  );
}
