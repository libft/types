export function repeat(input: string, times: number): string {
  return Array.from(new Array(times))
    .map(() => input)
    .join("");
}
