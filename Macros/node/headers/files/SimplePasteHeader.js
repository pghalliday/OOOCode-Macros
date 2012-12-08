var HeaderBase = require('../HeaderBase'),
    SimplePaste = require('../../templates/macros/SimplePaste')
    util = require('util');

function SimplePasteHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name
  });

  SimplePasteHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste
    ]
  });
}
util.inherits(SimplePasteHeader, HeaderBase);
module.exports = SimplePasteHeader
