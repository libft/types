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
  ["signed_char", "signed char", []],
  ["signed_short", "signed short", []],
  ["signed_int", "signed int", []],
  ["signed_long", "signed long", []],
  ["unsigned_char", "unsigned char", []],
  ["unsigned_short", "unsigned short", []],
  ["unsigned_int", "unsigned int", []],
  ["unsigned_long", "unsigned long", []],
];

(async () => {
  for (let [type, realType, dependencies] of primitiveTypes) {
    emitArrayType(type, realType, dependencies);
  }
})();
