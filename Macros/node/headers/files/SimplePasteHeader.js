var HeaderBase = require('../HeaderBase'),
    SimplePaste = require('../../templates/macros/SimplePaste')
    util = require('util');

function SimplePasteHeader(options) {
  options = options || {};
  options.name = options.name || 'OOOSimplePaste';

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
