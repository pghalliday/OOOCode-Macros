function List(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '0(ARGS...) ' + options.count.name + '(ARGS), ARGS\n';
  contents += '#define ' + self.name + '1(ARGS...) 0\n';
  contents += '#define ' + self.name + '(ARGS...) ' + options.simplePaste.name + '(' + self.name + ', ' + options.isEmpty.name + '(ARGS))(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = List;