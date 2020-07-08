[@react.component]
let make = () => {
  let route = Route.useRoute();

  <>
    {switch (route) {
     | AuthContainer(authSubPage) => <AuthContainer subPage=authSubPage />
     | Home => <Home />
     | ErrorNotFound => <ErrorNotFound />
     }}
  </>;
};
