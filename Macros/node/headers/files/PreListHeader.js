var HeaderBase = require('../HeaderBase'),
    PreList = require('../../templates/macros/PreList'),
    Pre = require('../../templates/macros/Pre'),
    Post = require('../../templates/macros/Post'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function PreListHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var pre = new Pre({
    name: options.name + '_Pre',
    maxArguments: options.maxSize
  });

  var post = new Post({
    name: options.name + '_Post',
    maxArguments: options.maxSize
  });

  var preList = new PreList({
    name: options.name,
    maxLists: options.maxLists,
    simplePaste: simplePaste,
    pre: pre,
    post: post
  });

  PreListHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      pre,
      post,
      preList
    ]
  });
}
util.inherits(PreListHeader, HeaderBase);
module.exports = PreListHeader
