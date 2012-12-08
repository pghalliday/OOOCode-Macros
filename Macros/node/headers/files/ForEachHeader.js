var HeaderBase = require('../HeaderBase'),
    ForEach = require('../../templates/macros/ForEach'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function ForEachHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxIterations
  });

  var forEach = new ForEach({
    name: options.name,
    maxIterations: options.maxIterations,
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  ForEachHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      forEach
    ]
  });
}
util.inherits(ForEachHeader, HeaderBase);
module.exports = ForEachHeader
