function SimplePaste(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define _' + self.name + '(ARG1,ARG2) ARG1##ARG2\n';
  contents += '#define ' + self.name + '(ARG1,ARG2) _' + self.name + '(ARG1,ARG2)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = SimplePaste;