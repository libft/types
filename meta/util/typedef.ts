import { repeat } from "./string/repeat";

export interface TypedefField {
  type: string;
  name: string;
}

export function typedef(name: string, fields: TypedefField[]): string {
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
