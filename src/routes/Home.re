[@react.component]
let make = () => {
  <div className="home-page">
    <section className="hero is-fullheight is-default is-bold">
      <Header />
      <div className="hero-body">
        <div className="container has-text-centered">
          <div className="columns is-vcentered">
            <div className="column is-5">
              <figure className="image is-4by3">
                <img
                  src="https://picsum.photos/800/600/?random"
                  alt="Description"
                />
              </figure>
            </div>
            <div className="column is-6 is-offset-1">
              <h1 className="title is-2">
                {React.string("Superhero Scaffolding")}
              </h1>
              <h2 className="subtitle is-4">
                {React.string(
                   "Let this cover page describe a product or service.",
                 )}
              </h2>
              <br />
              <p className="has-text-centered">
                <a className="button is-medium is-info is-outlined">
                  {React.string("Learn More")}
                </a>
              </p>
            </div>
          </div>
        </div>
      </div>
      <Footer />
    </section>
  </div>;
};
