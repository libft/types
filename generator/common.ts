import { Variable } from "./types";
import { stringRepeat } from "./util/stringRepeat";
import { tabDepth } from "./util/tabDepth";

export const ftHeader =
  "/* ************************************************************************** */\n/*                                                                            */\n/*                                                        :::      ::::::::   */\n/*   fake_file_name (file name is useless too)          :+:      :+:    :+:   */\n/*                                                    +:+ +:+         +:+     */\n/*   By: 42header-remover <whatever@example.com>    +#+  +:+       +#+        */\n/*                                                +#+#+#+#+#+   +#+           */\n/*   Created: 1970/01/01 00:00:00 by VCS handles       #+#    #+#             */\n/*   Updated: 1970/01/01 00:00:00 by file history     ###   ########.fr       */\n/*                                                                            */\n/* ************************************************************************** */";

export function varDecl(variables: Variable[]): string {
  const longestTabDepth = variables.reduce(
    (acc, curr) => Math.max(acc, tabDepth(curr.type)),
    0
  );
  return variables
    .map(({ name, pointer, type }) => {
      const tabLength = longestTabDepth * 4 - type.length;
      const tabCount = Math.ceil(tabLength / 4);
      return `\t${type}${stringRepeat("\t", tabCount)}${stringRepeat(
        "*",
        pointer
      )}${name};`;
    })
    .join("\n");
}
