export function includes(...headers: string[]): string {
  return Array.from(new Set(headers))
    .map((header) => `# include ${header}`)
    .join("\n");
}
