function List(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOList';
  options.count = options.count || 'OOOListCount';
  options.simplePaste = options.simplePaste || 'OOOListSimplePaste';
  options.isEmpty = options.isEmpty || 'OOOListIsEmpty';

  self.name = options.name;

  var contents = '';

  contents += '#define ' + options.name + '0(ARGS...) ' + options.count + '(ARGS), ARGS\n';
  contents += '#define ' + options.name + '1(ARGS...) 0\n';
  contents += '#define ' + options.name + '(ARGS...) ' + options.simplePaste + '(' + options.name + ', ' + options.isEmpty + '(ARGS))(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = List;