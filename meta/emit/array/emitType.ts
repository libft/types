import { promises as fs } from "fs";
import { header } from "../../common/header";
import {
  headerProtectionEnd,
  headerProtectionStart,
} from "../../common/headerProtection";
import { includesInHeader } from "../../util/includes";
import { typedef } from "../../util/typedef";

export async function emitType(
  typename: string,
  originalType: string,
  dependencies: string[]
): Promise<void> {
  await fs.mkdir("src/ft/types/array", { recursive: true });
  await fs.writeFile(
    `src/ft/types/array/ft_types_array_${typename}.h`,
    `${header}
${headerProtectionStart(`ft_types_array_${typename}`)}
${includesInHeader("<stddef.h>", ...dependencies)}

${typedef(`ft_types_array_${typename}`, [
  { type: originalType, name: "*element" },
  { type: "size_t", name: "count" },
])}

${headerProtectionEnd}
`
  );
}
