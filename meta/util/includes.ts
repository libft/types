function headerComparator(a: string, b: string) {
  if (
    (a.startsWith("<") && b.startsWith("<")) ||
    (a.startsWith('"') && b.startsWith('"'))
  ) {
    return a.localeCompare(b);
  }
  return a.startsWith("<") ? -1 : 1;
}

export function includes(...headers: string[]): string {
  return Array.from(new Set(headers))
    .sort(headerComparator)
    .map((header) => `#include ${header}`)
    .join("\n");
}

export function includesInHeader(...headers: string[]): string {
  return Array.from(new Set(headers))
    .sort(headerComparator)
    .map((header) => `# include ${header}`)
    .join("\n");
}
