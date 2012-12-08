var HeaderBase = require('../HeaderBase'),
    Post = require('../../templates/macros/Post'),
    util = require('util');

function PostHeader(options) {
  var post = new Post({
    name: options.name,
    maxArguments: options.maxArguments
  });

  PostHeader.super_.call(this, {
    name: options.name,
    macros: [
      post
    ]
  });
}
util.inherits(PostHeader, HeaderBase);
module.exports = PostHeader
