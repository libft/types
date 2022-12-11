export function stringRepeat(str: string, count: number): string {
  return Array.from(new Array(count))
    .map(() => str)
    .join("");
}
