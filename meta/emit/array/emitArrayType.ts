import { emitType } from "./emitType";

export async function emitArrayType(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await emitType(typename, originalType, dependencies);
}
