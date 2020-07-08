let handleClick = (href, event) => {
  event |> ReactEvent.Mouse.preventDefault;
  href |> ReasonReactRouter.push;
};

[@react.component]
let make = (~className="", ~style=ReactDOMRe.Style.make(), ~href, ~children) => {
  <a className href style onClick={href |> handleClick}> children </a>;
};

module Button = {
  [@react.component]
  let make =
      (
        ~className="",
        ~style=ReactDOMRe.Style.make(),
        ~onClick,
        ~disabled=false,
        ~children,
      ) => {
    <button className style onClick={handleClick(onClick)} disabled>
      children
    </button>;
  };
};
