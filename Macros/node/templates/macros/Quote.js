function Quote(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define _' + self.name + '(ARGS...) #ARGS\n';
  contents += '#define ' + self.name + '(ARGS...) _' + self.name + '(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Quote;