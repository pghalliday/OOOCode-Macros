var HeaderBase = require('../HeaderBase'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    util = require('util');

function IsEmptyHeader(options) {
  options = options || {};
  options.maxArguments = options.maxArguments || 100;
  options.name = options.name || 'OOOIsEmpty';

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
