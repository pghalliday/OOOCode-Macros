var HeaderBase = require('../HeaderBase'),
    ForEachList = require('../../templates/macros/ForEachList'),
    Pre = require('../../templates/macros/Pre'),
    Post = require('../../templates/macros/Post'),
    Count = require('../../templates/macros/Count'),
    List = require('../../templates/macros/List'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function ForEachListHeader(options) {
  options = options || {};
  options.maxIterations = options.maxIterations || 100;
  options.maxSize = options.maxSize || 1000;
  options.name = options.name || 'OOOForEachList';

  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxIterations
  });

  var count = new Count({
    name: options.name + '_Count',
    maxArguments: options.maxSize,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
  });

  var list = new List({
    name: options.name + '_List',
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name,
    count: count.name
  });

  var pre = new Pre({
    name: options.name + '_Pre',
    maxArguments: options.maxSize
  });

  var post = new Post({
    name: options.name + '_Post',
    maxArguments: options.maxSize
  });

  var forEachList = new ForEachList({
    name: options.name,
    maxIterations: options.maxIterations,
    list: list.name,
    pre: pre.name,
    post: post.name,
    simplePaste: simplePaste.name,
    isEmpty: isEmpty.name
  });

  ForEachListHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      count,
      list,
      pre,
      post,
      forEachList
    ]
  });
}
util.inherits(ForEachListHeader, HeaderBase);
module.exports = ForEachListHeader
