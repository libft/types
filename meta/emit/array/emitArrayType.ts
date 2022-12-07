import { promises as fs } from "fs";
import { header } from "../../common/header";
import {
  headerProtectionEnd,
  headerProtectionStart,
} from "../../common/headerProtection";
import { includes } from "../../util/includes";
import { typedef } from "../../util/typedef";

async function emitTypes(
  typename: string,
  originalType: string,
  dependencies: string[]
): Promise<void> {
  await fs.mkdir("src/ft/types/array", { recursive: true });
  await fs.writeFile(
    `src/ft/types/array/ft_types_array_${typename}.h`,
    `${header}
${headerProtectionStart(`ft_types_array_${typename}`)}
${includes("<stddef.h>", ...dependencies)}

${typedef(`ft_types_array_${typename}`, [
  { type: originalType, name: "element" },
  { type: "size_t", name: "count" },
])}

${headerProtectionEnd}
`
  );
}

export async function emitArrayType(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await emitTypes(typename, originalType, dependencies);
}
