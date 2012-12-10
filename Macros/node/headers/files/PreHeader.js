var HeaderBase = require('../HeaderBase'),
    Pre = require('../../templates/macros/Pre'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    Post = require('../../templates/macros/Post'),
    util = require('util');

function PreHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var post = new Post({
    name: options.name + '_Post',
    maxArguments: options.maxArguments,
    simplePaste: simplePaste
  });

  var pre = new Pre({
    name: options.name,
    maxArguments: options.maxArguments,
    simplePaste: simplePaste,
    post: post
  });

  PreHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      post,
      pre
    ]
  });
}
util.inherits(PreHeader, HeaderBase);
module.exports = PreHeader
