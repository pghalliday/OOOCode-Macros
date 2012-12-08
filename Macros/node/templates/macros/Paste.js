function Paste(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define _' + self.name + '(FIRST,LAST,ITERATION,ARG,REMAINDER) ' + options.simplePaste.name + '(ARG,REMAINDER)\n';
  contents += '#define ' + self.name + '(ARGS...) ' + options.forEach.name + '(_' + self.name + ', ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Paste;