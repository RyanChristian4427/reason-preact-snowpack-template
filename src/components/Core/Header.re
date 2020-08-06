[@react.component]
let make = () => {
  let (burgerClicked, setBurgerClicked) = React.useState(() => false);

  <div className="hero-head">
    <nav className="navbar">
      <div className="container">
        <div className="navbar-brand">
          <a
            className="navbar-item"
            //                <img src={avatar} alt="gravatar placeholder" />
          />
          <span
            className={
              burgerClicked
                ? "navbar-burger burger is-active" : "navbar-burger burger"
            }>
            //            onClick={_ => setBurgerClicked(!burgerClicked)}
             <span /> <span /> <span /> </span>
        </div>
        <div
          className={burgerClicked ? "navbar-menu is-active" : "navbar-menu"}>
          <div className="navbar-end">
            <div className="tabs is-right">
              <ul>
                <li className="is-active">
                  <a> {React.string("Home")} </a>
                </li>
                <li>
                  <Link href="/auth/login"> {React.string("Log Out")} </Link>
                </li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </nav>
  </div>;
};
