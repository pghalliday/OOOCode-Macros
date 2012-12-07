function Post(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOPost';
  options.maxArguments = options.maxArguments || 1000;

  self.name = options.name;

  var contents = '';

  for (var arguments = options.maxArguments; arguments > 0; arguments--) {
    contents += '#define ' + (options.name + arguments) + '( \\\n';
    for (var argument = 0; argument < arguments; argument++) {
      contents += 'ARG' + (argument) + ', \\\n';
    }
    contents += 'ARGS...) \\\n';
    contents += 'ARGS\n';
  }
  contents += '#define ' + options.name + '0(ARGS...) ARGS\n';
  contents += '#define _' + options.name + '(COUNT, ARGS...) ' + options.name + '##COUNT(ARGS)\n';
  contents += '#define ' + options.name + '(COUNT, ARGS...) _' + options.name + '(COUNT, ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Post;