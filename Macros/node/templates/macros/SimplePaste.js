function SimplePaste(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOSimplePaste';

  self.name = options.name;

  var contents = '';

  contents += '#define _' + options.name + '(ARG1,ARG2) ARG1##ARG2\n';
  contents += '#define ' + options.name + '(ARG1,ARG2) _' + options.name + '(ARG1,ARG2)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = SimplePaste;