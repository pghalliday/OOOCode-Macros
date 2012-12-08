var HeaderBase = require('../HeaderBase'),
    Count = require('../../templates/macros/Count'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function CountHeader(options) {
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
    simplePaste: simplePaste,
    isEmpty: isEmpty
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
