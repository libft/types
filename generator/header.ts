import { ftHeader, varDecl } from "./common";
import {
  FunctionPrototype,
  Header,
  HeaderComponent,
  TypedefEnum,
  TypedefStruct,
  TypedefUnion,
} from "./types";
import { arrayDedup } from "./util/arrayDedup";
import { stringRepeat } from "./util/stringRepeat";
import { tabDepth } from "./util/tabDepth";

export function header({
  name,
  systemIncludes,
  localIncludes,
  components,
}: Header): string {
  const longestTabDepth = components
    .filter((c): c is FunctionPrototype => c.type === "FunctionPrototype")
    .reduce((acc, curr) => Math.max(acc, tabDepth(curr.returns.type)), 0);

  return `${ftHeader}

#ifndef ${name.toUpperCase()}_H
# define ${name.toUpperCase()}_H

${arrayDedup(systemIncludes)
  .sort()
  .map((l) => `# include <${l}.h>`)
  .join("\n")}
${arrayDedup(localIncludes)
  .sort()
  .map((l) => `# include "${l}.h"`)
  .join("\n")}

${components
  .map((c) => componentFunction[c.type](c as never, longestTabDepth))
  .join("\n\n")}

#endif
`;
}

const componentFunction: {
  [K in HeaderComponent["type"]]: (
    component: HeaderComponent & { type: K },
    longestTabDepth: number
  ) => string;
} = {
  TypedefStruct,
  TypedefUnion,
  TypedefEnum,
  FunctionPrototype,
};

function TypedefStruct({ name, variables }: TypedefStruct) {
  return `typedef struct s_${name}
{
${varDecl(variables)}
}\tt_${name};`;
}

function TypedefUnion({ name, variables }: TypedefUnion) {
  return `typedef union u_${name}
{
${varDecl(variables)}
}\tt_${name};`;
}

function TypedefEnum({ name, values }: TypedefEnum): string {
  return `typedef enum e_${name}
{
${values.map((v) => `\t${v}`).join(",\n")}
}\tt_${name};`;
}

function FunctionPrototype(
  { args, returns: { name, pointer, type } }: FunctionPrototype,
  longestTabDepth: number
): string {
  const tabLength = longestTabDepth * 4 - type.length;
  const tabCount = Math.ceil(tabLength / 4);
  if (!args.length)
    return `${type}${stringRepeat("\t", tabCount)}${stringRepeat(
      "*",
      pointer
    )}${name}(void);`;
  return `${type}${stringRepeat("\t", tabCount)}${stringRepeat(
    "*",
    pointer
  )}${name}(
${args
  .map(
    ({ name, pointer, type }, i, a) =>
      `\t${type} ${stringRepeat("*", pointer)}${name}${
        i === a.length - 1 ? "" : ","
      }`
  )
  .join("\n")}
);`;
}
