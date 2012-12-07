var HeaderBase = require('../HeaderBase'),
    List = require('../../templates/macros/List'),
    Count = require('../../templates/macros/Count'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste')
    util = require('util');

function ListHeader(options) {
  options = options || {};
  options.name = options.name || 'OOOList';
  options.maxSize = options.maxSize || 1000;

  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxArguments
  });

  var count = new Count({
    name: options.name + '_Count',
    maxArguments: options.maxSize,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
  });

  var list = new List({
    name: options.name,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name,
    count: count.name
  });

  ListHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      count,
      list
    ]
  });
}
util.inherits(ListHeader, HeaderBase);
module.exports = ListHeader
