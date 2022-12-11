import { primitiveTypes } from "./common/primitiveTypes";
import { emitArrayType } from "./emit/array/emitArrayType";
import { emitSListType } from "./emit/slist/emitSListType";

(async () => {
  for (let primitiveType of primitiveTypes) {
    emitArrayType(primitiveType, `t_${primitiveType}`);
    emitSListType(primitiveType, `t_${primitiveType}`);
  }
})();
