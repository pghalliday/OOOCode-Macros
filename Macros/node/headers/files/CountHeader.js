var HeaderBase = require('../HeaderBase'),
    Count = require('../../templates/macros/Count'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function CountHeader(options) {
  options = options || {};
  options.maxArguments = options.maxArguments || 1000;
  options.name = options.name || 'OOOCount';

  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxArguments
  });

  var count = new Count({
    name: options.name,
    maxArguments: options.maxArguments,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
  });

  CountHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      count
    ]
  });
}
util.inherits(CountHeader, HeaderBase);
module.exports = CountHeader
