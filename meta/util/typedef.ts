import { Field, variableDecls } from "./variableDecls";

export function typedef(name: string, fields: Field[]): string {
  return `typedef struct s_${name}
{
${variableDecls(fields)}
}\tt_${name};`;
}
