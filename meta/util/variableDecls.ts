import { repeat } from "./string/repeat";

export interface Field {
  type: string;
  name: string;
}

export function variableDecls(fields: Field[]): string {
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
  return fieldsLine.join("\n");
}
