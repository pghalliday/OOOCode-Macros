var HeaderBase = require('../HeaderBase'),
    ForEach = require('../../templates/macros/ForEach'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function ForEachHeader(options) {
  options = options || {};
  options.maxIterations = options.maxIterations || 100;
  options.name = options.name || 'OOOForEach';

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
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
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
