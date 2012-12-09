function PreList(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  for (var list = 0; list < options.maxLists; list++) {
    contents += '#define ' + (self.name + list) + '(ARGS...) \\\n';
    contents += options.pre.name + '( \\\n';
    for (var post = 0; post < list; post++) {
      contents += options.post.name + '( \\\n';      
    }
    contents += 'ARGS \\\n';
    for (var post = 0; post < list; post++) {
      contents += ') \\\n';
    }
    contents += ')\n';
  }
  contents += '#define ' + self.name + '(INDEX,ARGS...) ' + options.simplePaste.name + '(' + self.name + ',INDEX)(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = PreList;