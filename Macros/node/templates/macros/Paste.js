function Paste(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOPaste';
  options.forEach = options.forEach || 'OOOPasteForEach';
  options.simplePaste = options.simplePaste || 'OOOPasteSimplePaste';

  self.name = options.name;

  var contents = '';

  contents += '#define _' + options.name + '(FIRST,LAST,ITERATION,ARG,REMAINDER) ' + options.simplePaste + '(ARG,REMAINDER)\n';
  contents += '#define ' + options.name + '(ARGS...) ' + options.forEach + '(_' + options.name + ', ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Paste;