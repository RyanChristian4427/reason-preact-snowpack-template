const purgecss = require("@fullhuman/postcss-purgecss");

module.exports = {
  plugins: [
    ...(process.env.NODE_ENV === "production"
      ? [
          purgecss({
            content: ["**/*.bs.js"],
            whitelist: ["html", "body"],
          }),
        ]
      : []),
  ],
};
