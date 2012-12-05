function Quote(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOQuote';

  self.name = options.name;

  var contents = '';

  contents += '#define _' + options.name + '(ARG) #ARG\n';
  contents += '#define ' + options.name + '(ARG) _' + options.name + '(ARG)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Quote;