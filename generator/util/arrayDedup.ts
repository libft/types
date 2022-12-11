export function arrayDedup<T>(array: T[]): T[] {
  return Array.from(new Set(array));
}
