var HeaderBase = require('../HeaderBase'),
    Filter = require('../../templates/macros/Filter'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    AppendArgs = require('../../templates/macros/AppendArgs'),
    Count = require('../../templates/macros/Count'),
    List = require('../../templates/macros/List'),
    Pre = require('../../templates/macros/Pre'),
    Post = require('../../templates/macros/Post'),
    ForEachList = require('../../templates/macros/ForEachList'),
    util = require('util');

function FilterHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxArguments
  });

  var appendArgs = new AppendArgs({
    name: options.name + '_AppendArgs',
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  var count = new Count({
    name: options.name + '_Count',
    maxArguments: options.maxArguments,
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  var list = new List({
    name: options.name + '_List',
    simplePaste: simplePaste,
    isEmpty: isEmpty,
    count: count
  });

  var post = new Post({
    name: options.name + '_Post',
    maxArguments: options.maxArguments,
    simplePaste: simplePaste
  });

  var pre = new Pre({
    name: options.name + '_Pre',
    maxArguments: options.maxArguments,
    simplePaste: simplePaste,
    post: post
  });

  var forEachList = new ForEachList({
    name: options.name + '_ForEachList',
    maxIterations: options.maxIterations,
    list: list,
    pre: pre,
    post: post,
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  var filter = new Filter({
    name: options.name,
    maxLabels: options.maxLabels,
    list: list,
    pre: pre,
    post: post,
    simplePaste: simplePaste,
    isEmpty: isEmpty,
    appendArgs: appendArgs,
    forEachList: forEachList
  });

  FilterHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      appendArgs,
      count,
      list,
      pre,
      post,
      forEachList,
      filter
    ]
  });
}
util.inherits(FilterHeader, HeaderBase);
module.exports = FilterHeader
