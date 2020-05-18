// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");

var Raw = { };

var query = "query ($arg: ListsInput!)  {\nlistsInput(arg: $arg)  \n}\n";

function parse(value) {
  return {
          listsInput: value.listsInput
        };
}

function serialize(value) {
  var value$1 = value.listsInput;
  return {
          listsInput: value$1
        };
}

function serializeInputObjectListsInput(inp) {
  var a = inp.nullableOfNullable;
  var tmp;
  if (a !== undefined) {
    var a$1 = a;
    tmp = $$Array.map((function (b) {
            if (b !== undefined) {
              return b;
            }
            
          }), a$1);
  } else {
    tmp = undefined;
  }
  var a$2 = inp.nullableOfNonNullable;
  var tmp$1;
  if (a$2 !== undefined) {
    var a$3 = a$2;
    tmp$1 = $$Array.map((function (b) {
            return b;
          }), a$3);
  } else {
    tmp$1 = undefined;
  }
  var a$4 = inp.nonNullableOfNullable;
  var a$5 = inp.nonNullableOfNonNullable;
  return {
          nullableOfNullable: tmp,
          nullableOfNonNullable: tmp$1,
          nonNullableOfNullable: $$Array.map((function (b) {
                  if (b !== undefined) {
                    return b;
                  }
                  
                }), a$4),
          nonNullableOfNonNullable: $$Array.map((function (b) {
                  return b;
                }), a$5)
        };
}

function serializeVariables(inp) {
  return {
          arg: serializeInputObjectListsInput(inp.arg)
        };
}

function makeVariables(arg, param) {
  return {
          arg: serializeInputObjectListsInput(arg)
        };
}

function makeInputObjectListsInput(nullableOfNullable, nullableOfNonNullable, nonNullableOfNullable, nonNullableOfNonNullable, param) {
  return {
          nullableOfNullable: nullableOfNullable,
          nullableOfNonNullable: nullableOfNonNullable,
          nonNullableOfNullable: nonNullableOfNullable,
          nonNullableOfNonNullable: nonNullableOfNonNullable
        };
}

var Z__INTERNAL = {
  _graphql_arg_82: 0,
  _graphql_arg_77: 0,
  _graphql_ListsInput_47: 0,
  graphql_module: 0
};

var MyQuery$prime = {
  Raw: Raw,
  query: query,
  parse: parse,
  serialize: serialize,
  serializeVariables: serializeVariables,
  serializeInputObjectListsInput: serializeInputObjectListsInput,
  makeVariables: makeVariables,
  makeInputObjectListsInput: makeInputObjectListsInput,
  Z__INTERNAL: Z__INTERNAL
};

var self = {
  query: query,
  Raw: Raw,
  parse: parse,
  serialize: serialize
};

var MyQuery = {
  Raw: Raw,
  query: query,
  parse: parse,
  serialize: serialize,
  serializeVariables: serializeVariables,
  serializeInputObjectListsInput: serializeInputObjectListsInput,
  makeVariables: makeVariables,
  makeInputObjectListsInput: makeInputObjectListsInput,
  Z__INTERNAL: Z__INTERNAL,
  self: self
};

exports.MyQuery$prime = MyQuery$prime;
exports.MyQuery = MyQuery;
/* No side effect */
