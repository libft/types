export const headerProtectionEnd = "#endif";

export function headerProtectionStart(filename: string): string {
  return `#ifndef ${filename.toUpperCase()}_H\n# define ${filename.toUpperCase()}_H\n`;
}
