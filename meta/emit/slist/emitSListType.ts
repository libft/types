import { emitClear } from "./emitClear";
import { emitInit } from "./emitInit";
import { emitPush } from "./emitPush";
import { emitToArray } from "./emitToArray";
import { emitType } from "./emitType";

export async function emitSListType(
  typename: string,
  originalType = typename,
  dependencies: string[] = []
): Promise<void> {
  await emitType(typename, originalType, dependencies);
  await emitInit(typename, originalType, dependencies);
  await emitClear(typename, originalType, dependencies);
  await emitPush(typename, originalType, dependencies);
  await emitToArray(typename, originalType, dependencies);
}
