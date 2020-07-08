%bs.raw
{| import "src/styles/auth.css" |};

let nbsp = [%raw {|'\u00a0'|}];
let bullet = [%raw {|'\u2022'|}];

type authSubPage =
  | Login
  | Register
  | ForgottenPassword;

[@react.component]
let make = (~subPage: authSubPage) => {
  let (
    title: string,
    subtitle: string,
    form: React.element,
    links: React.element,
  ) =
    switch (subPage) {
    | Login => (
        "Login",
        "Please provide your credentials to proceed.",
        <Login />,
        <>
          <Link href="/auth/register"> {React.string("Sign Up")} </Link>
          nbsp
          bullet
          nbsp
          <Link href="/auth/forgotten-password">
            {React.string("Forgot Password")}
          </Link>
        </>,
      )
    | Register => (
        "Register",
        "Please provide your details to proceed.",
        <Register />,
        <>
          <Link href="/auth/login"> {React.string("Login")} </Link>
          nbsp
          bullet
          nbsp
          <Link href="/auth/forgotten-password">
            {React.string("Forgot Password")}
          </Link>
        </>,
      )
    | ForgottenPassword => (
        "Forgotten Password",
        "Please provide the email address associated with your account",
        <ForgottenPassword />,
        <>
          <Link href="/auth/register"> {React.string("Sign Up")} </Link>
          nbsp
          bullet
          nbsp
          <Link href="/auth/login"> {React.string("Login")} </Link>
        </>,
      )
    };

  <div className="auth-page">
    <section className="hero is-fullheight">
      <div className="hero-body">
        <div className="container has-text-centered">
          <div className="column is-4 is-offset-4">
            <h3 className="title"> {React.string(title)} </h3>
            <hr className="auth-hr" />
            <h5 className="subtitle"> {React.string(subtitle)} </h5>
            <div className="box">
              <figure className="avatar">
                <img
                  src="https://picsum.photos/800/600/?random"
                  alt="Random Image"
                />
              </figure>
              form
            </div>
            <p className="has-text-grey"> links </p>
          </div>
        </div>
      </div>
      <Footer />
    </section>
  </div>;
};
