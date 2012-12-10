function Post(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '0(ARGS...) ARGS\n';
  contents += '\n';
  contents += '#define _' + self.name + '1(ARG0,ARGS...) ARGS\n';
  contents += '#define ' + self.name + '1(ARGS...) _' + self.name + '1(ARGS)\n';
  contents += '\n';
  for (var argument = 1; argument <= options.maxArguments; argument++) {
    contents += '#define ' + self.name + (argument + 1) + '(ARGS...) ' + self.name + '1(' + self.name + argument + '(ARGS))\n';
    contents += '\n';
  }
  contents += '#define _' + self.name + '(INDEX,ARGS...) ' + options.simplePaste.name + '(' + self.name + ',INDEX)(ARGS)\n';
  contents += '#define ' + self.name + '(ARGS...) _' + self.name + '(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Post;