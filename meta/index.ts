import { primitiveTypes } from "./common/primitiveTypes";
import { emitArrayType } from "./emit/array/emitArrayType";
import { emitSListType } from "./emit/slist/emitSListType";

(async () => {
  for (let [type, realType, dependencies] of primitiveTypes) {
    emitArrayType(type, realType, dependencies);
    emitSListType(type, realType, dependencies);
  }
})();
