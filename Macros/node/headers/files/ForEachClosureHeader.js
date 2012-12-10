var HeaderBase = require('../HeaderBase'),
    ForEachClosure = require('../../templates/macros/ForEachClosure'),
    Pre = require('../../templates/macros/Pre'),
    Post = require('../../templates/macros/Post'),
    PreList = require('../../templates/macros/PreList'),
    PostList = require('../../templates/macros/PostList'),
    Count = require('../../templates/macros/Count'),
    List = require('../../templates/macros/List'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function ForEachClosureHeader(options) {
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
    maxArguments: options.maxSize,
    simplePaste: simplePaste
  });

  var pre = new Pre({
    name: options.name + '_Pre',
    maxArguments: options.maxSize,
    simplePaste: simplePaste,
    post: post
  });

  var preList = new PreList({
    name: options.name + '_PreList',
    maxLists: options.maxIterations,
    simplePaste: simplePaste,
    pre: pre,
    post: post
  });

  var postList = new PostList({
    name: options.name + '_PostList',
    maxLists: options.maxIterations,
    simplePaste: simplePaste,
    post: post
  });

  var forEachClosure = new ForEachClosure({
    name: options.name,
    maxIterations: options.maxIterations,
    list: list,
    preList: preList,
    postList: postList,
    simplePaste: simplePaste,
    isEmpty: isEmpty
  });

  ForEachClosureHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      count,
      list,
      pre,
      post,
      preList,
      postList,
      forEachClosure
    ]
  });
}
util.inherits(ForEachClosureHeader, HeaderBase);
module.exports = ForEachClosureHeader
