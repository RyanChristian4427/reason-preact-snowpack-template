// Importing bulma & variables here as snowpack's @import syntax in CSS is still wonky.
// Easiest way to get around that is to just add a couple more imports here.
%bs.raw
{| import "bulma/css/bulma.css" |};
%bs.raw
{| import "./styles/index.css" |};
%bs.raw
{| import "./styles/variables.css" |};

ReactDOMRe.renderToElementWithId(<App />, "root");
