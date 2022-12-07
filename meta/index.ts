import { promises as fs } from "fs";

const header =
  "/* ************************************************************************** */\n/*                                                                            */\n/*                                                        :::      ::::::::   */\n/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */\n/*                                                    +:+ +:+         +:+     */\n/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */\n/*                                                +#+#+#+#+#+   +#+           */\n/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */\n/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */\n/*                                                                            */\n/* ************************************************************************** */\n";

function repeat(input: string, times: number): string {
  return Array.from(new Array(times))
    .map(() => input)
    .join("");
}

function headerProtectionStart(filename: string): string {
  return `#ifndef ${filename.toUpperCase()}_H\n# define ${filename.toUpperCase()}_H\n`;
}

const headerProtectionEnd = "#endif";

interface TypedefField {
  type: string;
  name: string;
}
function typedef(name: string, fields: TypedefField[]): string {
  const firstLine = `typedef struct s_${name}`;
  const secondLine = "{";
  const lastLine = `}\tt_${name};`;
  const longestFieldNameLength = fields.reduce(
    (acc, curr) => Math.max(acc, curr.type.length),
    0
  );
  const tabDepth = Math.ceil((longestFieldNameLength + 1) / 4);
  const fieldsLine = fields.map(({ type, name }) => {
    const tabLength = tabDepth * 4 - type.length;
    const tabCount = Math.ceil(tabLength / 4);
    return `\t${type}${repeat("\t", tabCount)}${name};`;
  });
  return [firstLine, secondLine, ...fieldsLine, lastLine].join("\n");
}

function includes(...headers: string[]): string {
  return Array.from(new Set(headers))
    .map((header) => `# include ${header}`)
    .join("\n");
}

async function emitArrayType(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
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

const primitiveTypes: [
  type: string,
  realType: string,
  dependencies: string[]
][] = [
  ["char", "char", []],
  ["schar", "signed char", []],
  ["short", "signed short", []],
  ["int", "signed int", []],
  ["long", "signed long", []],
  ["longlong", "signed long long", []],
  ["uchar", "unsigned char", []],
  ["ushort", "unsigned short", []],
  ["uint", "unsigned int", []],
  ["ulong", "unsigned long", []],
  ["ulonglong", "unsigned long long", []],
  ["float", "float", []],
  ["double", "double", []],
  ["long double", "long double", []],
  ["size", "size_t", ["<stddef.h>"]],
  ["ptrdiff", "ptrdiff_t", ["<stddef.h>"]],
  ["i8", "int8_t", ["<stdint.h>"]],
  ["i16", "int16_t", ["<stdint.h>"]],
  ["i32", "int32_t", ["<stdint.h>"]],
  ["i64", "int64_t", ["<stdint.h>"]],
  ["i8fast", "int_fast8_t", ["<stdint.h>"]],
  ["i16fast", "int_fast16_t", ["<stdint.h>"]],
  ["i32fast", "int_fast32_t", ["<stdint.h>"]],
  ["i64fast", "int_fast64_t", ["<stdint.h>"]],
  ["i8least", "int_least8_t", ["<stdint.h>"]],
  ["i16least", "int_least16_t", ["<stdint.h>"]],
  ["i32least", "int_least32_t", ["<stdint.h>"]],
  ["i64least", "int_least64_t", ["<stdint.h>"]],
  ["iptr", "intptr_t", ["<stdint.h>"]],
  ["imax", "intmax_t", ["<stdint.h>"]],
  ["u8", "uint8_t", ["<stdint.h>"]],
  ["u16", "uint16_t", ["<stdint.h>"]],
  ["u32", "uint32_t", ["<stdint.h>"]],
  ["u64", "uint64_t", ["<stdint.h>"]],
  ["u8fast", "uint_fast8_t", ["<stdint.h>"]],
  ["u16fast", "uint_fast16_t", ["<stdint.h>"]],
  ["u32fast", "uint_fast32_t", ["<stdint.h>"]],
  ["u64fast", "uint_fast64_t", ["<stdint.h>"]],
  ["u8least", "uint_least8_t", ["<stdint.h>"]],
  ["u16least", "uint_least16_t", ["<stdint.h>"]],
  ["u32least", "uint_least32_t", ["<stdint.h>"]],
  ["u64least", "uint_least64_t", ["<stdint.h>"]],
  ["uptr", "uintptr_t", ["<stdint.h>"]],
  ["umax", "uintmax_t", ["<stdint.h>"]],
  ["bool", "bool", ["<stdbool.h>"]],
];

(async () => {
  for (let [type, realType, dependencies] of primitiveTypes) {
    emitArrayType(type, realType, dependencies);
  }
})();
