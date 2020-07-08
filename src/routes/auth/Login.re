%bs.raw
{|import { LogIn as _LogIn } from "preact-feather"|};

module LogIn = {
  [@react.component] [@bs.val]
  external make:
    (~color: option(string), ~size: option(int)) => React.element =
    "_LogIn";
};

[@react.component]
let make = () => {
  let (email, setEmail) = React.useState(() => "");
  let (password, setPassword) = React.useState(() => "");

  let (inProgress, setInProgress) = React.useState(() => false);
  let (error, setError) = React.useState(() => None);

  <form>
    <div className="field">
      <div className="control">
        <input
          className="input is-large"
          type_="email"
          placeholder="Email"
          value=email
          disabled=inProgress
          onChange={event => {
            let email = ReactEvent.Form.target(event)##value;
            setEmail(_ => email);
          }}
        />
      </div>
    </div>
    <div className="field">
      <div className="control">
        <input
          className="input is-large"
          type_="password"
          placeholder="Passwordfff"
          value=password
          disabled=inProgress
          onChange={event => {
            let password = ReactEvent.Form.target(event)##value;
            setPassword(_ => password);
          }}
        />
      </div>
    </div>
    <div className="field">
      <div className="control">
        <h2 className="error is-size-5">
          {switch (error) {
           | Some(message) => React.string(message)
           | None => React.null
           }}
        </h2>
      </div>
    </div>
    <button
      className={
        inProgress
          ? "button is-block is-deep-space-sparkle is-large is-fullwidth is-loading"
          : "button is-block is-deep-space-sparkle is-large is-fullwidth"
      }
      type_="button"
      disabled=inProgress>
      <div className="level">
        <div className="level-item">
          <span> {React.string("Submit")} </span>
          <span className="icon is-small">
            {<LogIn color=None size=None />}
          </span>
        </div>
      </div>
    </button>
  </form>;
};
