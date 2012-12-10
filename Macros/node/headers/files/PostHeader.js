var HeaderBase = require('../HeaderBase'),
    Post = require('../../templates/macros/Post'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function PostHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var post = new Post({
    name: options.name,
    maxArguments: options.maxArguments,
    simplePaste: simplePaste
  });

  PostHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      post
    ]
  });
}
util.inherits(PostHeader, HeaderBase);
module.exports = PostHeader
