var HeaderBase = require('../HeaderBase'),
    PostList = require('../../templates/macros/PostList'),
    Post = require('../../templates/macros/Post'),
    SimplePaste = require('../../templates/macros/SimplePaste'),
    util = require('util');

function PostListHeader(options) {
  var simplePaste = new SimplePaste({
    name: options.name + '_SimplePaste'
  });

  var post = new Post({
    name: options.name + '_Post',
    maxArguments: options.maxSize
  });

  var postList = new PostList({
    name: options.name,
    maxLists: options.maxLists,
    simplePaste: simplePaste,
    post: post
  });

  PostListHeader.super_.call(this, {
    name: options.name,
    macros: [
      simplePaste,
      post,
      postList
    ]
  });
}
util.inherits(PostListHeader, HeaderBase);
module.exports = PostListHeader
