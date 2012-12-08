var HeaderBase = require('../HeaderBase'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    util = require('util');

function IsEmptyHeader(options) {
  var isEmpty = new IsEmpty({
    name: options.name,
    maxArguments: options.maxArguments
  });

  IsEmptyHeader.super_.call(this, {
    name: options.name,
    macros: [
      isEmpty
    ]
  });
}
util.inherits(IsEmptyHeader, HeaderBase);
module.exports = IsEmptyHeader
