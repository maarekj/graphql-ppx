// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Caml_option = require("bs-platform/lib/js/caml_option.js");

var Raw = { };

function parse(value) {
  return {
          recursiveInput: value.recursiveInput
        };
}

function serialize(value) {
  return {
          recursiveInput: value.recursiveInput
        };
}

function serializeInputObjectRecursiveInput(inp) {
  var a = inp.otherField;
  var a$1 = inp.inner;
  var a$2 = inp.enum;
  return {
          otherField: a !== undefined ? a : undefined,
          inner: a$1 !== undefined ? serializeInputObjectRecursiveInput(Caml_option.valFromOption(a$1)) : undefined,
          enum: a$2 !== undefined ? (
              a$2 !== 225952583 ? (
                  a$2 >= 382368628 ? "SECOND" : "FIRST"
                ) : "THIRD"
            ) : undefined
        };
}

function serializeVariables(inp) {
  return {
          arg: serializeInputObjectRecursiveInput(inp.arg)
        };
}

function makeVariables(arg, param) {
  return serializeVariables({
              arg: arg
            });
}

function makeInputObjectRecursiveInput(otherField, inner, $$enum, param) {
  return {
          otherField: otherField,
          inner: inner,
          enum: $$enum
        };
}

var Z__INTERNAL = {
  _graphql_RecursiveInput_47: 0,
  graphql_module: 0
};

var MyQuery = {
  Raw: Raw,
  query: "query ($arg: RecursiveInput!)  {\nrecursiveInput(arg: $arg)  \n}\n",
  parse: parse,
  serialize: serialize,
  serializeVariables: serializeVariables,
  serializeInputObjectRecursiveInput: serializeInputObjectRecursiveInput,
  makeVariables: makeVariables,
  makeInputObjectRecursiveInput: makeInputObjectRecursiveInput,
  Z__INTERNAL: Z__INTERNAL
};

exports.MyQuery = MyQuery;
/* No side effect */
