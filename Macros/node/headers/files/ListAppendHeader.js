var HeaderBase = require('../HeaderBase'),
    ListAppend = require('../../templates/macros/ListAppend'),
    Post = require('../../templates/macros/Post'),
    Pre = require('../../templates/macros/Pre'),
    List = require('../../templates/macros/List'),
    Count = require('../../templates/macros/Count'),
    IsEmpty = require('../../templates/macros/IsEmpty'),
    SimplePaste = require('../../templates/macros/SimplePaste')
    util = require('util');

function ListAppendHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var isEmpty = new IsEmpty({
    name: options.name + '_IsEmpty',
    maxArguments: options.maxSize
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

  var listAppend = new ListAppend({
    name: options.name,
    list: list,
    pre: pre,
    post: post,
    simplePaste: simplePaste,
    isEmpty: isEmpty,
    count: count
  });

  ListAppendHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      isEmpty,
      count,
      list,
      pre,
      post,
      listAppend
    ]
  });
}
util.inherits(ListAppendHeader, HeaderBase);
module.exports = ListAppendHeader
