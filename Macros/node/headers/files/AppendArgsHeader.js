var HeaderBase = require('../HeaderBase'),
    AppendArgs = require('../../templates/macros/AppendArgs'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function AppendArgsHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxArguments
  });

  var appendArgs = new AppendArgs({
    name: options.name,
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  AppendArgsHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      appendArgs
    ]
  });
}
util.inherits(AppendArgsHeader, HeaderBase);
module.exports = AppendArgsHeader
