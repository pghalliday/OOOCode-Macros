function Post(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  for (var arguments = options.maxArguments; arguments > 0; arguments--) {
    contents += '#define ' + (self.name + arguments) + '( \\\n';
    for (var argument = 0; argument < arguments; argument++) {
      contents += 'ARG' + (argument) + ', \\\n';
    }
    contents += 'ARGS...) \\\n';
    contents += 'ARGS\n';
  }
  contents += '#define ' + self.name + '0(ARGS...) ARGS\n';
  contents += '#define _' + self.name + '(COUNT, ARGS...) ' + self.name + '##COUNT(ARGS)\n';
  contents += '#define ' + self.name + '(ARGS...) _' + self.name + '(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Post;