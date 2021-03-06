[@ocaml.ppx.context
  {
    tool_name: "migrate_driver",
    include_dirs: [],
    load_path: [],
    open_modules: [],
    for_package: None,
    debug: false,
    use_threads: false,
    use_vmthreads: false,
    recursive_types: false,
    principal: false,
    transparent_modules: false,
    unboxed_types: false,
    unsafe_string: false,
    cookies: [],
  }
];
module MyQuery = {
  module Raw = {
    type t_variousScalars = {
      __typename: string,
      nullableString: Js.Nullable.t(string),
      string,
      nullableInt: Js.Nullable.t(int),
      int,
      nullableFloat: Js.Nullable.t(float),
      float,
      nullableBoolean: Js.Nullable.t(bool),
      boolean: bool,
      nullableID: Js.Nullable.t(string),
      id: string,
    };
    type t = {variousScalars: t_variousScalars};
    type t_variables = unit;
  };
  /**The GraphQL query string*/
  let query = "query   {\nvariousScalars  {\n__typename  \nnullableString  \nstring  \nnullableInt  \nint  \nnullableFloat  \nfloat  \nnullableBoolean  \nboolean  \nnullableID  \nid  \n}\n\n}\n";
  type t_variousScalars = {
    __typename: string,
    nullableString: option(string),
    string,
    nullableInt: option(int),
    int,
    nullableFloat: option(float),
    float,
    nullableBoolean: option(bool),
    boolean: bool,
    nullableID: option(string),
    id: string,
  };
  type t = {variousScalars: t_variousScalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      variousScalars: {
        let value = (value: Raw.t).variousScalars;
        (
          {
            __typename: {
              let value = (value: Raw.t_variousScalars).__typename;
              value;
            },
            nullableString: {
              let value = (value: Raw.t_variousScalars).nullableString;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            string: {
              let value = (value: Raw.t_variousScalars).string;
              value;
            },
            nullableInt: {
              let value = (value: Raw.t_variousScalars).nullableInt;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            int: {
              let value = (value: Raw.t_variousScalars).int;
              value;
            },
            nullableFloat: {
              let value = (value: Raw.t_variousScalars).nullableFloat;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            float: {
              let value = (value: Raw.t_variousScalars).float;
              value;
            },
            nullableBoolean: {
              let value = (value: Raw.t_variousScalars).nullableBoolean;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            boolean: {
              let value = (value: Raw.t_variousScalars).boolean;
              value;
            },
            nullableID: {
              let value = (value: Raw.t_variousScalars).nullableID;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            id: {
              let value = (value: Raw.t_variousScalars).id;
              value;
            },
          }: t_variousScalars
        );
      },
    }: t
  );
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    {
      let variousScalars = {
        let value = (value: t).variousScalars;
        (
          {
            let id = {
              let value = (value: t_variousScalars).id;
              value;
            }
            and nullableID = {
              let value = (value: t_variousScalars).nullableID;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and boolean = {
              let value = (value: t_variousScalars).boolean;
              value;
            }
            and nullableBoolean = {
              let value = (value: t_variousScalars).nullableBoolean;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and float = {
              let value = (value: t_variousScalars).float;
              value;
            }
            and nullableFloat = {
              let value = (value: t_variousScalars).nullableFloat;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and int = {
              let value = (value: t_variousScalars).int;
              value;
            }
            and nullableInt = {
              let value = (value: t_variousScalars).nullableInt;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and string = {
              let value = (value: t_variousScalars).string;
              value;
            }
            and nullableString = {
              let value = (value: t_variousScalars).nullableString;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and __typename = {
              let value = (value: t_variousScalars).__typename;
              value;
            };
            {
              __typename,
              nullableString,
              string,
              nullableInt,
              int,
              nullableFloat,
              float,
              nullableBoolean,
              boolean,
              nullableID,
              id,
            };
          }: Raw.t_variousScalars
        );
      };
      {variousScalars: variousScalars};
    }: Raw.t
  );
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  external variablesToJson: Raw.t_variables => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module MyQuery {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
module MyQuery2 = {
  module Raw = {
    type t_variousScalars = {
      __typename: string,
      nullableString: Js.Nullable.t(string),
      string,
      nullableInt: Js.Nullable.t(int),
      int,
      nullableFloat: Js.Nullable.t(float),
      float,
      nullableBoolean: Js.Nullable.t(bool),
      boolean: bool,
      nullableID: Js.Nullable.t(string),
      id: string,
    };
    type t = {variousScalars: t_variousScalars};
    type t_variables = unit;
  };
  %raw
  "let { graphql } = require(\"gatsby\")";
  /**The GraphQL query string*/
  let query = [%raw
    "graphql`\n  query   {\n    variousScalars  {\n      __typename\n      nullableString\n      string\n      nullableInt\n      int\n      nullableFloat\n      float\n      nullableBoolean\n      boolean\n      nullableID\n      id\n    }\n  }\n`"
  ];
  type t_variousScalars = {
    __typename: string,
    nullableString: option(string),
    string,
    nullableInt: option(int),
    int,
    nullableFloat: option(float),
    float,
    nullableBoolean: option(bool),
    boolean: bool,
    nullableID: option(string),
    id: string,
  };
  type t = {variousScalars: t_variousScalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      variousScalars: {
        let value = (value: Raw.t).variousScalars;
        (
          {
            __typename: {
              let value = (value: Raw.t_variousScalars).__typename;
              value;
            },
            nullableString: {
              let value = (value: Raw.t_variousScalars).nullableString;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            string: {
              let value = (value: Raw.t_variousScalars).string;
              value;
            },
            nullableInt: {
              let value = (value: Raw.t_variousScalars).nullableInt;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            int: {
              let value = (value: Raw.t_variousScalars).int;
              value;
            },
            nullableFloat: {
              let value = (value: Raw.t_variousScalars).nullableFloat;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            float: {
              let value = (value: Raw.t_variousScalars).float;
              value;
            },
            nullableBoolean: {
              let value = (value: Raw.t_variousScalars).nullableBoolean;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            boolean: {
              let value = (value: Raw.t_variousScalars).boolean;
              value;
            },
            nullableID: {
              let value = (value: Raw.t_variousScalars).nullableID;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            id: {
              let value = (value: Raw.t_variousScalars).id;
              value;
            },
          }: t_variousScalars
        );
      },
    }: t
  );
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    {
      let variousScalars = {
        let value = (value: t).variousScalars;
        (
          {
            let id = {
              let value = (value: t_variousScalars).id;
              value;
            }
            and nullableID = {
              let value = (value: t_variousScalars).nullableID;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and boolean = {
              let value = (value: t_variousScalars).boolean;
              value;
            }
            and nullableBoolean = {
              let value = (value: t_variousScalars).nullableBoolean;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and float = {
              let value = (value: t_variousScalars).float;
              value;
            }
            and nullableFloat = {
              let value = (value: t_variousScalars).nullableFloat;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and int = {
              let value = (value: t_variousScalars).int;
              value;
            }
            and nullableInt = {
              let value = (value: t_variousScalars).nullableInt;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and string = {
              let value = (value: t_variousScalars).string;
              value;
            }
            and nullableString = {
              let value = (value: t_variousScalars).nullableString;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and __typename = {
              let value = (value: t_variousScalars).__typename;
              value;
            };
            {
              __typename,
              nullableString,
              string,
              nullableInt,
              int,
              nullableFloat,
              float,
              nullableBoolean,
              boolean,
              nullableID,
              id,
            };
          }: Raw.t_variousScalars
        );
      };
      {variousScalars: variousScalars};
    }: Raw.t
  );
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  external variablesToJson: Raw.t_variables => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module MyQuery2 {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
module MyQuery3 = {
  module Raw = {
    type t_variousScalars = {
      __typename: string,
      nullableString: Js.Nullable.t(string),
      string,
      nullableInt: Js.Nullable.t(int),
      int,
      nullableFloat: Js.Nullable.t(float),
      float,
      nullableBoolean: Js.Nullable.t(bool),
      boolean: bool,
      nullableID: Js.Nullable.t(string),
      id: string,
    };
    type t = {variousScalars: t_variousScalars};
    type t_variables = unit;
  };
  %raw
  "let { graphql } = require(\"gatsby\")";
  /**The GraphQL query string*/
  let query = [%raw
    "graphql`\n  query   {\n    variousScalars  {\n      __typename\n      nullableString\n      string\n      nullableInt\n      int\n      nullableFloat\n      float\n      nullableBoolean\n      boolean\n      nullableID\n      id\n    }\n  }\n`"
  ];
  type t_variousScalars = {
    __typename: string,
    nullableString: option(string),
    string,
    nullableInt: option(int),
    int,
    nullableFloat: option(float),
    float,
    nullableBoolean: option(bool),
    boolean: bool,
    nullableID: option(string),
    id: string,
  };
  type t = {variousScalars: t_variousScalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      variousScalars: {
        let value = (value: Raw.t).variousScalars;
        (
          {
            __typename: {
              let value = (value: Raw.t_variousScalars).__typename;
              value;
            },
            nullableString: {
              let value = (value: Raw.t_variousScalars).nullableString;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            string: {
              let value = (value: Raw.t_variousScalars).string;
              value;
            },
            nullableInt: {
              let value = (value: Raw.t_variousScalars).nullableInt;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            int: {
              let value = (value: Raw.t_variousScalars).int;
              value;
            },
            nullableFloat: {
              let value = (value: Raw.t_variousScalars).nullableFloat;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            float: {
              let value = (value: Raw.t_variousScalars).float;
              value;
            },
            nullableBoolean: {
              let value = (value: Raw.t_variousScalars).nullableBoolean;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            boolean: {
              let value = (value: Raw.t_variousScalars).boolean;
              value;
            },
            nullableID: {
              let value = (value: Raw.t_variousScalars).nullableID;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            id: {
              let value = (value: Raw.t_variousScalars).id;
              value;
            },
          }: t_variousScalars
        );
      },
    }: t
  );
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    {
      let variousScalars = {
        let value = (value: t).variousScalars;
        (
          {
            let id = {
              let value = (value: t_variousScalars).id;
              value;
            }
            and nullableID = {
              let value = (value: t_variousScalars).nullableID;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and boolean = {
              let value = (value: t_variousScalars).boolean;
              value;
            }
            and nullableBoolean = {
              let value = (value: t_variousScalars).nullableBoolean;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and float = {
              let value = (value: t_variousScalars).float;
              value;
            }
            and nullableFloat = {
              let value = (value: t_variousScalars).nullableFloat;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and int = {
              let value = (value: t_variousScalars).int;
              value;
            }
            and nullableInt = {
              let value = (value: t_variousScalars).nullableInt;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and string = {
              let value = (value: t_variousScalars).string;
              value;
            }
            and nullableString = {
              let value = (value: t_variousScalars).nullableString;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and __typename = {
              let value = (value: t_variousScalars).__typename;
              value;
            };
            {
              __typename,
              nullableString,
              string,
              nullableInt,
              int,
              nullableFloat,
              float,
              nullableBoolean,
              boolean,
              nullableID,
              id,
            };
          }: Raw.t_variousScalars
        );
      };
      {variousScalars: variousScalars};
    }: Raw.t
  );
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  external variablesToJson: Raw.t_variables => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module MyQuery3 {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
module MyQuery4 = {
  module Raw = {
    type t_variousScalars = {
      __typename: string,
      nullableString: Js.Nullable.t(string),
      string,
      nullableInt: Js.Nullable.t(int),
      int,
      nullableFloat: Js.Nullable.t(float),
      float,
      nullableBoolean: Js.Nullable.t(bool),
      boolean: bool,
      nullableID: Js.Nullable.t(string),
      id: string,
    };
    type t = {variousScalars: t_variousScalars};
    type t_variables = unit;
  };
  %raw
  "let graphql = require(\"gatsby\")";
  /**The GraphQL query string*/
  let query = [%raw
    "graphql`\n  query   {\n    variousScalars  {\n      __typename\n      nullableString\n      string\n      nullableInt\n      int\n      nullableFloat\n      float\n      nullableBoolean\n      boolean\n      nullableID\n      id\n    }\n  }\n`"
  ];
  type t_variousScalars = {
    __typename: string,
    nullableString: option(string),
    string,
    nullableInt: option(int),
    int,
    nullableFloat: option(float),
    float,
    nullableBoolean: option(bool),
    boolean: bool,
    nullableID: option(string),
    id: string,
  };
  type t = {variousScalars: t_variousScalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => (
    {
      variousScalars: {
        let value = (value: Raw.t).variousScalars;
        (
          {
            __typename: {
              let value = (value: Raw.t_variousScalars).__typename;
              value;
            },
            nullableString: {
              let value = (value: Raw.t_variousScalars).nullableString;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            string: {
              let value = (value: Raw.t_variousScalars).string;
              value;
            },
            nullableInt: {
              let value = (value: Raw.t_variousScalars).nullableInt;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            int: {
              let value = (value: Raw.t_variousScalars).int;
              value;
            },
            nullableFloat: {
              let value = (value: Raw.t_variousScalars).nullableFloat;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            float: {
              let value = (value: Raw.t_variousScalars).float;
              value;
            },
            nullableBoolean: {
              let value = (value: Raw.t_variousScalars).nullableBoolean;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            boolean: {
              let value = (value: Raw.t_variousScalars).boolean;
              value;
            },
            nullableID: {
              let value = (value: Raw.t_variousScalars).nullableID;
              switch (Js.toOption(value)) {
              | Some(value) => Some(value)
              | None => None
              };
            },
            id: {
              let value = (value: Raw.t_variousScalars).id;
              value;
            },
          }: t_variousScalars
        );
      },
    }: t
  );
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => (
    {
      let variousScalars = {
        let value = (value: t).variousScalars;
        (
          {
            let id = {
              let value = (value: t_variousScalars).id;
              value;
            }
            and nullableID = {
              let value = (value: t_variousScalars).nullableID;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and boolean = {
              let value = (value: t_variousScalars).boolean;
              value;
            }
            and nullableBoolean = {
              let value = (value: t_variousScalars).nullableBoolean;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and float = {
              let value = (value: t_variousScalars).float;
              value;
            }
            and nullableFloat = {
              let value = (value: t_variousScalars).nullableFloat;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and int = {
              let value = (value: t_variousScalars).int;
              value;
            }
            and nullableInt = {
              let value = (value: t_variousScalars).nullableInt;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and string = {
              let value = (value: t_variousScalars).string;
              value;
            }
            and nullableString = {
              let value = (value: t_variousScalars).nullableString;
              switch (value) {
              | Some(value) => Js.Nullable.return(value)
              | None => Js.Nullable.null
              };
            }
            and __typename = {
              let value = (value: t_variousScalars).__typename;
              value;
            };
            {
              __typename,
              nullableString,
              string,
              nullableInt,
              int,
              nullableFloat,
              float,
              nullableBoolean,
              boolean,
              nullableID,
              id,
            };
          }: Raw.t_variousScalars
        );
      };
      {variousScalars: variousScalars};
    }: Raw.t
  );
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
  external toJson: Raw.t => Js.Json.t = "%identity";
  external variablesToJson: Raw.t_variables => Js.Json.t = "%identity";
  module Z__INTERNAL = {
    type root = t;
    type nonrec graphql_module;
    /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module MyQuery4 {
  /**
  The GraphQL query string
  */
  let query: string;

  /**
  This is the main type of the result you will get back.
  You can hover above the identifier key (e.g. query or mutation) to see the fully generated type for your module.
  */
  type t;

  /**
  Parse the JSON GraphQL data to ReasonML data types
  */
  let parse: Raw.t => t;

  /**
  Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data
  */
  let serialize: t => Raw.t;

  /**
  This is the JSON compatible type of the GraphQL data.
  It should not be necessary to access the types inside for normal use cases.
  */
  module Raw: { type t; };
}
```*/
    let graphql_module: graphql_module = Obj.magic(0);
  };
};
