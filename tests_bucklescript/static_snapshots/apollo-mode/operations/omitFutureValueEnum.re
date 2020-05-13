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
module Normal = {
  module Raw = {
    type t_mutationWithError_errors_field = string;
    type t_mutationWithError_errors = {
      __typename: string,
      message: string,
      field: t_mutationWithError_errors_field,
    };
    type t_mutationWithError = {
      __typename: string,
      errors: Js.Nullable.t(array(t_mutationWithError_errors)),
    };
    type t = {mutationWithError: t_mutationWithError};
  };
  let query = "mutation   {\nmutationWithError  {\n__typename  \nerrors  {\n__typename  \nmessage  \nfield  \n}\n\n}\n\n}\n";
  type t_mutationWithError_errors_field = [
    | `FutureAddedValue(string)
    | `FIRST
    | `SECOND
    | `THIRD
  ];
  type t_mutationWithError_errors = {
    __typename: string,
    message: string,
    field: t_mutationWithError_errors_field,
  };
  type t_mutationWithError = {
    __typename: string,
    errors: option(array(t_mutationWithError_errors)),
  };
  type t = {mutationWithError: t_mutationWithError};
  type operation = t;
  let parse: Raw.t => t =
    (value) => (
      {
        mutationWithError: {
          let value = (value: Raw.t).mutationWithError;
          (
            {
              __typename: {
                let value = (value: Raw.t_mutationWithError).__typename;
                value;
              },
              errors: {
                let value = (value: Raw.t_mutationWithError).errors;
                switch (Js.toOption(value)) {
                | Some(value) =>
                  Some(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             __typename: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   __typename;
                               value;
                             },
                             message: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   message;
                               value;
                             },
                             field: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).field;
                               switch (Obj.magic(value: string)) {
                               | "FIRST" => `FIRST
                               | "SECOND" => `SECOND
                               | "THIRD" => `THIRD
                               | other => `FutureAddedValue(other)
                               };
                             },
                           }: t_mutationWithError_errors
                         )
                       ),
                  )
                | None => None
                };
              },
            }: t_mutationWithError
          );
        },
      }: t
    );
  let serialize: t => Raw.t =
    (value) => (
      {
        let mutationWithError = {
          let value = (value: t).mutationWithError;
          (
            {
              let errors = {
                let value = (value: t_mutationWithError).errors;
                switch (value) {
                | Some(value) =>
                  Js.Nullable.return(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             let field = {
                               let value =
                                 (value: t_mutationWithError_errors).field;
                               switch (value) {
                               | `FIRST => "FIRST"
                               | `SECOND => "SECOND"
                               | `THIRD => "THIRD"
                               | `FutureAddedValue(other) => other
                               };
                             }
                             and message = {
                               let value =
                                 (value: t_mutationWithError_errors).message;
                               value;
                             }
                             and __typename = {
                               let value =
                                 (value: t_mutationWithError_errors).
                                   __typename;
                               value;
                             };
                             {__typename, message, field};
                           }: Raw.t_mutationWithError_errors
                         )
                       ),
                  )
                | None => Js.Nullable.null
                };
              }
              and __typename = {
                let value = (value: t_mutationWithError).__typename;
                value;
              };
              {__typename, errors};
            }: Raw.t_mutationWithError
          );
        };
        {mutationWithError: mutationWithError};
      }: Raw.t
    );
  let definition = (parse, query, serialize);
};
module ByConfig = {
  module Raw = {
    type t_mutationWithError_errors_field = string;
    type t_mutationWithError_errors = {
      __typename: string,
      message: string,
      field: t_mutationWithError_errors_field,
    };
    type t_mutationWithError = {
      __typename: string,
      errors: Js.Nullable.t(array(t_mutationWithError_errors)),
    };
    type t = {mutationWithError: t_mutationWithError};
  };
  let query = "mutation   {\nmutationWithError  {\n__typename  \nerrors  {\n__typename  \nmessage  \nfield  \n}\n\n}\n\n}\n";
  type t_mutationWithError_errors_field = [ | `FIRST | `SECOND | `THIRD];
  type t_mutationWithError_errors = {
    __typename: string,
    message: string,
    field: t_mutationWithError_errors_field,
  };
  type t_mutationWithError = {
    __typename: string,
    errors: option(array(t_mutationWithError_errors)),
  };
  type t = {mutationWithError: t_mutationWithError};
  type operation = t;
  let parse: Raw.t => t =
    (value) => (
      {
        mutationWithError: {
          let value = (value: Raw.t).mutationWithError;
          (
            {
              __typename: {
                let value = (value: Raw.t_mutationWithError).__typename;
                value;
              },
              errors: {
                let value = (value: Raw.t_mutationWithError).errors;
                switch (Js.toOption(value)) {
                | Some(value) =>
                  Some(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             __typename: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   __typename;
                               value;
                             },
                             message: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   message;
                               value;
                             },
                             field: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).field;
                               switch (Obj.magic(value: string)) {
                               | "FIRST" => `FIRST
                               | "SECOND" => `SECOND
                               | "THIRD" => `THIRD
                               | _ => raise(Not_found)
                               };
                             },
                           }: t_mutationWithError_errors
                         )
                       ),
                  )
                | None => None
                };
              },
            }: t_mutationWithError
          );
        },
      }: t
    );
  let serialize: t => Raw.t =
    (value) => (
      {
        let mutationWithError = {
          let value = (value: t).mutationWithError;
          (
            {
              let errors = {
                let value = (value: t_mutationWithError).errors;
                switch (value) {
                | Some(value) =>
                  Js.Nullable.return(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             let field = {
                               let value =
                                 (value: t_mutationWithError_errors).field;
                               switch (value) {
                               | `FIRST => "FIRST"
                               | `SECOND => "SECOND"
                               | `THIRD => "THIRD"
                               };
                             }
                             and message = {
                               let value =
                                 (value: t_mutationWithError_errors).message;
                               value;
                             }
                             and __typename = {
                               let value =
                                 (value: t_mutationWithError_errors).
                                   __typename;
                               value;
                             };
                             {__typename, message, field};
                           }: Raw.t_mutationWithError_errors
                         )
                       ),
                  )
                | None => Js.Nullable.null
                };
              }
              and __typename = {
                let value = (value: t_mutationWithError).__typename;
                value;
              };
              {__typename, errors};
            }: Raw.t_mutationWithError
          );
        };
        {mutationWithError: mutationWithError};
      }: Raw.t
    );
  let definition = (parse, query, serialize);
};
module ByDirective = {
  module Raw = {
    type t_mutationWithError_errors_field = string;
    type t_mutationWithError_errors = {
      __typename: string,
      message: string,
      field: t_mutationWithError_errors_field,
    };
    type t_mutationWithError = {
      __typename: string,
      errors: Js.Nullable.t(array(t_mutationWithError_errors)),
    };
    type t = {mutationWithError: t_mutationWithError};
  };
  let query = "mutation   {\nmutationWithError  {\n__typename  \nerrors  {\n__typename  \nmessage  \nfield @ppxOmitFutureValue \n}\n\n}\n\n}\n";
  type t_mutationWithError_errors_field = [ | `FIRST | `SECOND | `THIRD];
  type t_mutationWithError_errors = {
    __typename: string,
    message: string,
    field: t_mutationWithError_errors_field,
  };
  type t_mutationWithError = {
    __typename: string,
    errors: option(array(t_mutationWithError_errors)),
  };
  type t = {mutationWithError: t_mutationWithError};
  type operation = t;
  let parse: Raw.t => t =
    (value) => (
      {
        mutationWithError: {
          let value = (value: Raw.t).mutationWithError;
          (
            {
              __typename: {
                let value = (value: Raw.t_mutationWithError).__typename;
                value;
              },
              errors: {
                let value = (value: Raw.t_mutationWithError).errors;
                switch (Js.toOption(value)) {
                | Some(value) =>
                  Some(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             __typename: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   __typename;
                               value;
                             },
                             message: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).
                                   message;
                               value;
                             },
                             field: {
                               let value =
                                 (value: Raw.t_mutationWithError_errors).field;
                               switch (Obj.magic(value: string)) {
                               | "FIRST" => `FIRST
                               | "SECOND" => `SECOND
                               | "THIRD" => `THIRD
                               | _ => raise(Not_found)
                               };
                             },
                           }: t_mutationWithError_errors
                         )
                       ),
                  )
                | None => None
                };
              },
            }: t_mutationWithError
          );
        },
      }: t
    );
  let serialize: t => Raw.t =
    (value) => (
      {
        let mutationWithError = {
          let value = (value: t).mutationWithError;
          (
            {
              let errors = {
                let value = (value: t_mutationWithError).errors;
                switch (value) {
                | Some(value) =>
                  Js.Nullable.return(
                    value
                    |> Js.Array.map((value) =>
                         (
                           {
                             let field = {
                               let value =
                                 (value: t_mutationWithError_errors).field;
                               switch (value) {
                               | `FIRST => "FIRST"
                               | `SECOND => "SECOND"
                               | `THIRD => "THIRD"
                               };
                             }
                             and message = {
                               let value =
                                 (value: t_mutationWithError_errors).message;
                               value;
                             }
                             and __typename = {
                               let value =
                                 (value: t_mutationWithError_errors).
                                   __typename;
                               value;
                             };
                             {__typename, message, field};
                           }: Raw.t_mutationWithError_errors
                         )
                       ),
                  )
                | None => Js.Nullable.null
                };
              }
              and __typename = {
                let value = (value: t_mutationWithError).__typename;
                value;
              };
              {__typename, errors};
            }: Raw.t_mutationWithError
          );
        };
        {mutationWithError: mutationWithError};
      }: Raw.t
    );
  let definition = (parse, query, serialize);
};
