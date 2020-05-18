// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';


var Raw = { };

var query = "query   {\nvariousScalars  {\nnullableString  \nstring  \nnullableInt  \nint  \nnullableFloat  \nfloat  \nnullableBoolean  \nboolean  \nnullableID  \nid  \n}\n\n}\n";

function parse(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.nullableString;
  var value$3 = value$1.nullableInt;
  var value$4 = value$1.nullableFloat;
  var value$5 = value$1.nullableBoolean;
  var value$6 = value$1.nullableID;
  return {
          variousScalars: {
            nullableString: (value$2 == null) ? undefined : value$2,
            string: value$1.string,
            nullableInt: (value$3 == null) ? undefined : value$3,
            int: value$1.int,
            nullableFloat: (value$4 == null) ? undefined : value$4,
            float: value$1.float,
            nullableBoolean: (value$5 == null) ? undefined : value$5,
            boolean: value$1.boolean,
            nullableID: (value$6 == null) ? undefined : value$6,
            id: value$1.id
          }
        };
}

function serialize(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  var variousScalars = {
    nullableString: nullableString,
    string: value$10,
    nullableInt: nullableInt,
    int: value$8,
    nullableFloat: nullableFloat,
    float: value$6,
    nullableBoolean: nullableBoolean,
    boolean: value$4,
    nullableID: nullableID,
    id: value$2
  };
  return {
          variousScalars: variousScalars
        };
}

var Z__INTERNAL = {
  graphql_module: 0
};

var MyQuery$prime = {
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

var MyQuery = {
  Raw: Raw,
  query: query,
  parse: parse,
  serialize: serialize,
  Z__INTERNAL: Z__INTERNAL,
  self: self
};

var Raw$1 = { };

let { graphql } = require("gatsby")
;

var query$1 = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$1(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.nullableString;
  var value$3 = value$1.nullableInt;
  var value$4 = value$1.nullableFloat;
  var value$5 = value$1.nullableBoolean;
  var value$6 = value$1.nullableID;
  return {
          variousScalars: {
            nullableString: (value$2 == null) ? undefined : value$2,
            string: value$1.string,
            nullableInt: (value$3 == null) ? undefined : value$3,
            int: value$1.int,
            nullableFloat: (value$4 == null) ? undefined : value$4,
            float: value$1.float,
            nullableBoolean: (value$5 == null) ? undefined : value$5,
            boolean: value$1.boolean,
            nullableID: (value$6 == null) ? undefined : value$6,
            id: value$1.id
          }
        };
}

function serialize$1(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  var variousScalars = {
    nullableString: nullableString,
    string: value$10,
    nullableInt: nullableInt,
    int: value$8,
    nullableFloat: nullableFloat,
    float: value$6,
    nullableBoolean: nullableBoolean,
    boolean: value$4,
    nullableID: nullableID,
    id: value$2
  };
  return {
          variousScalars: variousScalars
        };
}

var Z__INTERNAL$1 = {
  graphql_module: 0
};

var MyQuery2$prime = {
  Raw: Raw$1,
  query: query$1,
  parse: parse$1,
  serialize: serialize$1,
  Z__INTERNAL: Z__INTERNAL$1
};

var self$1 = {
  query: query$1,
  Raw: Raw$1,
  parse: parse$1,
  serialize: serialize$1
};

var MyQuery2 = {
  Raw: Raw$1,
  query: query$1,
  parse: parse$1,
  serialize: serialize$1,
  Z__INTERNAL: Z__INTERNAL$1,
  self: self$1
};

var Raw$2 = { };

let { graphql } = require("gatsby")
;

var query$2 = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$2(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.nullableString;
  var value$3 = value$1.nullableInt;
  var value$4 = value$1.nullableFloat;
  var value$5 = value$1.nullableBoolean;
  var value$6 = value$1.nullableID;
  return {
          variousScalars: {
            nullableString: (value$2 == null) ? undefined : value$2,
            string: value$1.string,
            nullableInt: (value$3 == null) ? undefined : value$3,
            int: value$1.int,
            nullableFloat: (value$4 == null) ? undefined : value$4,
            float: value$1.float,
            nullableBoolean: (value$5 == null) ? undefined : value$5,
            boolean: value$1.boolean,
            nullableID: (value$6 == null) ? undefined : value$6,
            id: value$1.id
          }
        };
}

function serialize$2(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  var variousScalars = {
    nullableString: nullableString,
    string: value$10,
    nullableInt: nullableInt,
    int: value$8,
    nullableFloat: nullableFloat,
    float: value$6,
    nullableBoolean: nullableBoolean,
    boolean: value$4,
    nullableID: nullableID,
    id: value$2
  };
  return {
          variousScalars: variousScalars
        };
}

var Z__INTERNAL$2 = {
  graphql_module: 0
};

var MyQuery3$prime = {
  Raw: Raw$2,
  query: query$2,
  parse: parse$2,
  serialize: serialize$2,
  Z__INTERNAL: Z__INTERNAL$2
};

var self$2 = {
  query: query$2,
  Raw: Raw$2,
  parse: parse$2,
  serialize: serialize$2
};

var MyQuery3 = {
  Raw: Raw$2,
  query: query$2,
  parse: parse$2,
  serialize: serialize$2,
  Z__INTERNAL: Z__INTERNAL$2,
  self: self$2
};

var Raw$3 = { };

let graphql = require("gatsby")
;

var query$3 = (graphql`
  query   {
    variousScalars  {
      nullableString
      string
      nullableInt
      int
      nullableFloat
      float
      nullableBoolean
      boolean
      nullableID
      id
    }
  }
`);

function parse$3(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.nullableString;
  var value$3 = value$1.nullableInt;
  var value$4 = value$1.nullableFloat;
  var value$5 = value$1.nullableBoolean;
  var value$6 = value$1.nullableID;
  return {
          variousScalars: {
            nullableString: (value$2 == null) ? undefined : value$2,
            string: value$1.string,
            nullableInt: (value$3 == null) ? undefined : value$3,
            int: value$1.int,
            nullableFloat: (value$4 == null) ? undefined : value$4,
            float: value$1.float,
            nullableBoolean: (value$5 == null) ? undefined : value$5,
            boolean: value$1.boolean,
            nullableID: (value$6 == null) ? undefined : value$6,
            id: value$1.id
          }
        };
}

function serialize$3(value) {
  var value$1 = value.variousScalars;
  var value$2 = value$1.id;
  var value$3 = value$1.nullableID;
  var nullableID = value$3 !== undefined ? value$3 : null;
  var value$4 = value$1.boolean;
  var value$5 = value$1.nullableBoolean;
  var nullableBoolean = value$5 !== undefined ? value$5 : null;
  var value$6 = value$1.float;
  var value$7 = value$1.nullableFloat;
  var nullableFloat = value$7 !== undefined ? value$7 : null;
  var value$8 = value$1.int;
  var value$9 = value$1.nullableInt;
  var nullableInt = value$9 !== undefined ? value$9 : null;
  var value$10 = value$1.string;
  var value$11 = value$1.nullableString;
  var nullableString = value$11 !== undefined ? value$11 : null;
  var variousScalars = {
    nullableString: nullableString,
    string: value$10,
    nullableInt: nullableInt,
    int: value$8,
    nullableFloat: nullableFloat,
    float: value$6,
    nullableBoolean: nullableBoolean,
    boolean: value$4,
    nullableID: nullableID,
    id: value$2
  };
  return {
          variousScalars: variousScalars
        };
}

var Z__INTERNAL$3 = {
  graphql_module: 0
};

var MyQuery4$prime = {
  Raw: Raw$3,
  query: query$3,
  parse: parse$3,
  serialize: serialize$3,
  Z__INTERNAL: Z__INTERNAL$3
};

var self$3 = {
  query: query$3,
  Raw: Raw$3,
  parse: parse$3,
  serialize: serialize$3
};

var MyQuery4 = {
  Raw: Raw$3,
  query: query$3,
  parse: parse$3,
  serialize: serialize$3,
  Z__INTERNAL: Z__INTERNAL$3,
  self: self$3
};

exports.MyQuery$prime = MyQuery$prime;
exports.MyQuery = MyQuery;
exports.MyQuery2$prime = MyQuery2$prime;
exports.MyQuery2 = MyQuery2;
exports.MyQuery3$prime = MyQuery3$prime;
exports.MyQuery3 = MyQuery3;
exports.MyQuery4$prime = MyQuery4$prime;
exports.MyQuery4 = MyQuery4;
/*  Not a pure module */
