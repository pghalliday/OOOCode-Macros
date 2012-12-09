function Pre(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  for (var arguments = options.maxArguments; arguments > 0; arguments--) {
    contents += '#define ' + (self.name + arguments) + '( \\\n';
    for (var argument = 0; argument < arguments; argument++) {
      contents += 'ARG' + (argument) + ', \\\n';
    }
    contents += 'ARGS...) \\\n';
    for (var argument = 0; argument < (arguments - 1); argument++) {
      contents += 'ARG' + (argument) + ', \\\n';
    }
    contents += 'ARG' + (arguments - 1) + '\n';
  }
  contents += '#define ' + self.name + '0(ARGS...)\n';
  contents += '#define _' + self.name + '(COUNT, ARGS...) ' + self.name + '##COUNT(ARGS)\n';
  contents += '#define ' + self.name + '(ARGS...) _' + self.name + '(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Pre;