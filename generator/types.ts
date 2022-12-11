export interface Header {
  name: string;
  systemIncludes: string[];
  localIncludes: string[];
  components: HeaderComponent[];
}

export type HeaderComponent =
  | TypedefStruct
  | TypedefUnion
  | TypedefEnum
  | FunctionPrototype;

export interface TypedefStruct {
  type: "TypedefStruct";
  name: string;
  variables: Variable[];
}

export interface Variable {
  type: string;
  pointer: number;
  name: string;
}

export interface TypedefUnion {
  type: "TypedefUnion";
  name: string;
  variables: Variable[];
}

export interface TypedefEnum {
  type: "TypedefEnum";
  name: string;
  values: string[];
}

export interface FunctionPrototype {
  type: "FunctionPrototype";
  returns: Variable;
  args: Variable[];
}
