var HeaderBase = require('../HeaderBase'),
    Pre = require('../../templates/macros/Pre'),
    util = require('util');

function PreHeader(options) {
  var pre = new Pre({
    name: options.name,
    maxArguments: options.maxArguments
  });

  PreHeader.super_.call(this, {
    name: options.name,
    macros: [
      pre
    ]
  });
}
util.inherits(PreHeader, HeaderBase);
module.exports = PreHeader
