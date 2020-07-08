let copy = [%raw {|'\u00a9'|}];

[@react.component]
let make = () => {
  <div className="hero-foot">
    <div className="container has-text-centered">
      <span>
        <a href="https://github.com/RyanChristian4427">
          {React.string("GitHub ")}
        </a>
      </span>
      <span> copy {React.string(" 2019 Ryan Christian")} </span>
    </div>
  </div>;
};
