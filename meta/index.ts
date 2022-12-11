import { emitArrayType } from "./emit/array/emitArrayType";
import { allTypes, emitDerivedTypes } from "./emit/emitDerivedTypes";
import { emitSListType } from "./emit/slist/emitSListType";

(async () => {
  await emitDerivedTypes();
  for (let type of allTypes) {
    await emitArrayType(type, `t_${type}`);
    await emitSListType(type, `t_${type}`);
  }
})();
