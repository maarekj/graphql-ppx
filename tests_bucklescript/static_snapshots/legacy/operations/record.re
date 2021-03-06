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
type scalars = {
  string,
  int,
};

type dog = {
  name: string,
  barkVolume: float,
};

type oneFieldQuery = {nullableString: option(string)};
module MyQuery = {
  module Raw = {
    type t_variousScalars = {
      .
      "string": string,
      "int": int,
    };
    type t = {. "variousScalars": t_variousScalars};
    type t_variables = unit;
  };
  /**The GraphQL query string*/
  let query = "query   {\nvariousScalars  {\nstring  \nint  \n}\n\n}\n";
  type t = {. "variousScalars": scalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => {
    let variousScalars = {
      let value = value##variousScalars;
      (
        {
          let int = {
            let value = value##int;
            value;
          }
          and string = {
            let value = value##string;
            value;
          };
          {string, int};
        }: scalars
      );
    };
    {"variousScalars": variousScalars};
  };
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => {
    let variousScalars = {
      let value = value##variousScalars;
      let int = {
        let value = (value: scalars).int;
        value;
      }
      and string = {
        let value = (value: scalars).string;
        value;
      };
      {"string": string, "int": int};
    };
    {"variousScalars": variousScalars};
  };
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  let make = () => {
    "query": query,
    "variables": Js.Json.null,
    "parse": parse,
  };
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
module OneFieldQuery = {
  module Raw = {
    type t_variousScalars = {. "nullableString": Js.Nullable.t(string)};
    type t = {. "variousScalars": t_variousScalars};
    type t_variables = unit;
  };
  /**The GraphQL query string*/
  let query = "query   {\nvariousScalars  {\nnullableString  \n}\n\n}\n";
  type t_variousScalars = {nullableString: option(string)};
  type t = {. "variousScalars": t_variousScalars};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => {
    let variousScalars = {
      let value = value##variousScalars;
      (
        {
          let nullableString = {
            let value = value##nullableString;
            switch (Js.toOption(value)) {
            | Some(value) => Some(value)
            | None => None
            };
          };
          {nullableString: nullableString};
        }: t_variousScalars
      );
    };
    {"variousScalars": variousScalars};
  };
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => {
    let variousScalars = {
      let value = value##variousScalars;
      let nullableString = {
        let value = (value: t_variousScalars).nullableString;
        switch (value) {
        | Some(value) => Js.Nullable.return(value)
        | None => Js.Nullable.null
        };
      };
      {"nullableString": nullableString};
    };
    {"variousScalars": variousScalars};
  };
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  let make = () => {
    "query": query,
    "variables": Js.Json.null,
    "parse": parse,
  };
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
module OneFieldQuery {
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
module ExternalFragmentQuery = {
  module Fragment = {
    /**The GraphQL query string*/
    let query = "fragment Fragment on VariousScalars   {\nstring  \nint  \n}\n";
    module Raw = {
      type t = {
        .
        "string": string,
        "int": int,
      };
      type nonrec t_VariousScalars = t;
    };
    type t = {
      string,
      int,
    };
    type nonrec t_VariousScalars = t;
    /**Parse the JSON GraphQL data to ReasonML data types*/
    let parse = (value: Raw.t): t => (
      {
        let int = {
          let value = value##int;
          value;
        }
        and string = {
          let value = value##string;
          value;
        };
        {string, int};
      }: t
    );
    let verifyArgsAndParse = (value: Raw.t) => parse(value);
    /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
    let serialize = (value: t): Raw.t => {
      let int = {
        let value = (value: t).int;
        value;
      }
      and string = {
        let value = (value: t).string;
        value;
      };
      {"string": string, "int": int};
    };
    let name = "Fragment";
    external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
    external toJson: Raw.t => Js.Json.t = "%identity";
    module Z__INTERNAL = {
      type root = t;
      type nonrec graphql;
      /**```
VariousScalars {
  nullableString: String
  string: String!
  nullableInt: Int
  int: Int!
  nullableFloat: Float
  float: Float!
  nullableBoolean: Boolean
  boolean: Boolean!
  nullableID: ID
  id: ID!
}
```*/
      let graphql: graphql = Obj.magic(0);
      type nonrec graphql_module;
      /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module ExternalFragmentQuery {
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
  module Untitled1 = {
    module Raw = {
      type t = {. "variousScalars": Fragment.Raw.t};
      type t_variables = unit;
    };
    /**The GraphQL query string*/
    let query =
      (
        ("query   {\nvariousScalars  {\n..." ++ Fragment.name)
        ++ "   \n}\n\n}\n"
      )
      ++ Fragment.query;
    type t = {. "variousScalars": Fragment.t};
    type t_variables = unit;
    /**Parse the JSON GraphQL data to ReasonML data types*/
    let parse = (value: Raw.t): t => {
      let variousScalars = {
        let value = value##variousScalars;
        Fragment.verifyArgsAndParse(value);
      };
      {"variousScalars": variousScalars};
    };
    /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
    let serialize = (value: t): Raw.t => {
      let variousScalars = {
        let value = value##variousScalars;
        Fragment.serialize(value);
      };
      {"variousScalars": variousScalars};
    };
    let serializeVariables = () => ();
    let makeVariables = () => ();
    let makeDefaultVariables = () => makeVariables();
    let make = () => {
      "query": query,
      "variables": Js.Json.null,
      "parse": parse,
    };
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
module ExternalFragmentQuery {
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
};
module InlineFragmentQuery = {
  module Raw = {
    type t_dogOrHuman_Dog = {
      .
      "__typename": string,
      "name": string,
      "barkVolume": float,
    };
    type t_dogOrHuman;
    type t = {. "dogOrHuman": t_dogOrHuman};
    type t_variables = unit;
  };
  /**The GraphQL query string*/
  let query = "query   {\ndogOrHuman  {\n__typename\n...on Dog   {\nname  \nbarkVolume  \n}\n\n}\n\n}\n";
  type t_dogOrHuman_Dog = {
    name: string,
    barkVolume: float,
  };
  type t_dogOrHuman = [
    | `FutureAddedValue(Js.Json.t)
    | `Dog(t_dogOrHuman_Dog)
  ];
  type t = {. "dogOrHuman": t_dogOrHuman};
  type t_variables = unit;
  /**Parse the JSON GraphQL data to ReasonML data types*/
  let parse = (value: Raw.t): t => {
    let dogOrHuman = {
      let value = value##dogOrHuman;
      let typename: string =
        Obj.magic(Js.Dict.unsafeGet(Obj.magic(value), "__typename"));
      (
        switch (typename) {
        | "Dog" =>
          `Dog(
            {
              let value: Raw.t_dogOrHuman_Dog = Obj.magic(value);
              (
                {
                  let barkVolume = {
                    let value = value##barkVolume;
                    value;
                  }
                  and name = {
                    let value = value##name;
                    value;
                  };
                  {name, barkVolume};
                }: t_dogOrHuman_Dog
              );
            },
          )
        | _ => `FutureAddedValue(Obj.magic(value): Js.Json.t)
        }: t_dogOrHuman
      );
    };
    {"dogOrHuman": dogOrHuman};
  };
  /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
  let serialize = (value: t): Raw.t => {
    let dogOrHuman = {
      let value = value##dogOrHuman;
      switch (value) {
      | `Dog(value) => (
          Obj.magic(
            {
              let barkVolume = {
                let value = (value: t_dogOrHuman_Dog).barkVolume;
                value;
              }
              and name = {
                let value = (value: t_dogOrHuman_Dog).name;
                value;
              };
              {"__typename": "Dog", "name": name, "barkVolume": barkVolume};
            },
          ): Raw.t_dogOrHuman
        )
      | `FutureAddedValue(value) => (Obj.magic(value): Raw.t_dogOrHuman)
      };
    };
    {"dogOrHuman": dogOrHuman};
  };
  let serializeVariables = () => ();
  let makeVariables = () => ();
  let makeDefaultVariables = () => makeVariables();
  let make = () => {
    "query": query,
    "variables": Js.Json.null,
    "parse": parse,
  };
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
module InlineFragmentQuery {
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
module UnionExternalFragmentQuery = {
  module DogFragment = {
    /**The GraphQL query string*/
    let query = "fragment DogFragment on Dog   {\nname  \nbarkVolume  \n}\n";
    module Raw = {
      type t = {
        .
        "name": string,
        "barkVolume": float,
      };
      type nonrec t_Dog = t;
    };
    type t = {
      name: string,
      barkVolume: float,
    };
    type nonrec t_Dog = t;
    /**Parse the JSON GraphQL data to ReasonML data types*/
    let parse = (value: Raw.t): t => (
      {
        let barkVolume = {
          let value = value##barkVolume;
          value;
        }
        and name = {
          let value = value##name;
          value;
        };
        {name, barkVolume};
      }: t
    );
    let verifyArgsAndParse = (value: Raw.t) => parse(value);
    /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
    let serialize = (value: t): Raw.t => {
      let barkVolume = {
        let value = (value: t).barkVolume;
        value;
      }
      and name = {
        let value = (value: t).name;
        value;
      };
      {"name": name, "barkVolume": barkVolume};
    };
    let name = "DogFragment";
    external unsafe_fromJson: Js.Json.t => Raw.t = "%identity";
    external toJson: Raw.t => Js.Json.t = "%identity";
    module Z__INTERNAL = {
      type root = t;
      type nonrec graphql;
      /**```
Dog {
  name: String!
  barkVolume: Float!
}
```*/
      let graphql: graphql = Obj.magic(0);
      type nonrec graphql_module;
      /****--- graphql-ppx module ---**

The contents of this module are automatically generated by `graphql-ppx`.
The following is simply an overview of the most important variables and types that you can access from this module.

```
module UnionExternalFragmentQuery {
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
  module Untitled1 = {
    module Raw = {
      type t_dogOrHuman;
      type t = {. "dogOrHuman": t_dogOrHuman};
      type t_variables = unit;
    };
    /**The GraphQL query string*/
    let query =
      (
        (
          "query   {\ndogOrHuman  {\n__typename\n...on Dog   {\n..."
          ++ DogFragment.name
        )
        ++ "   \n}\n\n}\n\n}\n"
      )
      ++ DogFragment.query;
    type t_dogOrHuman = [
      | `FutureAddedValue(Js.Json.t)
      | `Dog(DogFragment.t)
    ];
    type t = {. "dogOrHuman": t_dogOrHuman};
    type t_variables = unit;
    /**Parse the JSON GraphQL data to ReasonML data types*/
    let parse = (value: Raw.t): t => {
      let dogOrHuman = {
        let value = value##dogOrHuman;
        let typename: string =
          Obj.magic(Js.Dict.unsafeGet(Obj.magic(value), "__typename"));
        (
          switch (typename) {
          | "Dog" =>
            `Dog(
              {
                let value: DogFragment.Raw.t = Obj.magic(value);
                DogFragment.verifyArgsAndParse(value);
              },
            )
          | _ => `FutureAddedValue(Obj.magic(value): Js.Json.t)
          }: t_dogOrHuman
        );
      };
      {"dogOrHuman": dogOrHuman};
    };
    /**Serialize the ReasonML GraphQL data that was parsed using the parse function back to the original JSON compatible data */
    let serialize = (value: t): Raw.t => {
      let dogOrHuman = {
        let value = value##dogOrHuman;
        switch (value) {
        | `Dog(value) => (
            Obj.magic(DogFragment.serialize(value)): Raw.t_dogOrHuman
          )
        | `FutureAddedValue(value) => (Obj.magic(value): Raw.t_dogOrHuman)
        };
      };
      {"dogOrHuman": dogOrHuman};
    };
    let serializeVariables = () => ();
    let makeVariables = () => ();
    let makeDefaultVariables = () => makeVariables();
    let make = () => {
      "query": query,
      "variables": Js.Json.null,
      "parse": parse,
    };
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
module UnionExternalFragmentQuery {
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
};
