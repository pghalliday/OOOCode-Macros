var HeaderBase = require('../HeaderBase'),
    Paste = require('../../templates/macros/Paste'),
    ForEach = require('../../templates/macros/ForEach'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste')
    util = require('util');

function PasteHeader(options) {
  options = options || {};
  options.maxArguments = options.maxArguments || 100;
  options.name = options.name || 'OOOPaste';

  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxArguments
  });

  var forEach = new ForEach({
    name: options.name + '_ForEach',
    maxIterations: options.maxArguments,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
  });

  var paste = new Paste({
    name: options.name,
    simplePaste: simplePaste.name,
    forEach: forEach.name
  });

  PasteHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      forEach,
      paste
    ]
  });
}
util.inherits(PasteHeader, HeaderBase);
module.exports = PasteHeader
