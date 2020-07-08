type t =
  | Home
  | AuthContainer(AuthContainer.authSubPage)
  | ErrorNotFound;

let useRoute: unit => t =
  () => {
    let url = ReasonReactRouter.useUrl();

    switch (url.path) {
    | ["auth", authSubPage] =>
      switch (authSubPage) {
      | "login" => AuthContainer(AuthContainer.Login)
      | "register" => AuthContainer(AuthContainer.Register)
      | "forgotten-password" => AuthContainer(AuthContainer.ForgottenPassword)
      | _ => ErrorNotFound
      }
    | [] => Home
    | _ => ErrorNotFound
    };
  };
