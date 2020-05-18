// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


function ExtendQuery(M) {
  var use = function (param) {
    return /* () */0;
  };
  return {
          use: use
        };
}

var Raw = { };

var query = "query Bla  {\nlists  {\nnullableOfNullable  \nnullableOfNonNullable  \nnonNullableOfNullable  \nnonNullableOfNonNullable  \n}\n\n}\n";

function parse(value) {
  var value$1 = value.lists;
  var value$2 = value$1.nullableOfNullable;
  var value$3 = value$1.nullableOfNonNullable;
  var value$4 = value$1.nonNullableOfNullable;
  var value$5 = value$1.nonNullableOfNonNullable;
  return {
          lists: {
            nullableOfNullable: (value$2 == null) ? undefined : value$2.map((function (value) {
                      if (value == null) {
                        return ;
                      } else {
                        return value;
                      }
                    })),
            nullableOfNonNullable: (value$3 == null) ? undefined : value$3.map((function (value) {
                      return value;
                    })),
            nonNullableOfNullable: value$4.map((function (value) {
                    if (value == null) {
                      return ;
                    } else {
                      return value;
                    }
                  })),
            nonNullableOfNonNullable: value$5.map((function (value) {
                    return value;
                  }))
          }
        };
}

function serialize(value) {
  var value$1 = value.lists;
  var value$2 = value$1.nonNullableOfNonNullable;
  var nonNullableOfNonNullable = value$2.map((function (value) {
          return value;
        }));
  var value$3 = value$1.nonNullableOfNullable;
  var nonNullableOfNullable = value$3.map((function (value) {
          if (value !== undefined) {
            return value;
          } else {
            return null;
          }
        }));
  var value$4 = value$1.nullableOfNonNullable;
  var nullableOfNonNullable = value$4 !== undefined ? value$4.map((function (value) {
            return value;
          })) : null;
  var value$5 = value$1.nullableOfNullable;
  var nullableOfNullable = value$5 !== undefined ? value$5.map((function (value) {
            if (value !== undefined) {
              return value;
            } else {
              return null;
            }
          })) : null;
  var lists = {
    nullableOfNullable: nullableOfNullable,
    nullableOfNonNullable: nullableOfNonNullable,
    nonNullableOfNullable: nonNullableOfNullable,
    nonNullableOfNonNullable: nonNullableOfNonNullable
  };
  return {
          lists: lists
        };
}

var Z__INTERNAL = {
  graphql_module: 0
};

var Bla$prime = {
  Raw: Raw,
  query: query,
  parse: parse,
  serialize: serialize,
  Z__INTERNAL: Z__INTERNAL
};

var self = {
  query: query,
  Raw: Raw,
  parse: parse,
  serialize: serialize
};

function use(param) {
  return /* () */0;
}

var Bla = {
  Raw: Raw,
  query: query,
  parse: parse,
  serialize: serialize,
  Z__INTERNAL: Z__INTERNAL,
  self: self,
  use: use
};

exports.ExtendQuery = ExtendQuery;
exports.Bla$prime = Bla$prime;
exports.Bla = Bla;
/* No side effect */
