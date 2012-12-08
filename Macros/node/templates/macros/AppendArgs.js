function AppendArgs(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '0_0(ARGS...) , ARGS\n';
  contents += '#define ' + self.name + '0_1(ARGS...)\n';
  contents += '#define ' + self.name + '1_0(ARGS...) ARGS\n';
  contents += '#define ' + self.name + '1_1(ARGS...)\n';
  contents += '#define ' + self.name + '(EMPTY, ARGS...) ' + options.simplePaste.name + '(' + self.name + ',' + options.simplePaste.name + '(EMPTY,' + options.simplePaste.name + '(_,' + options.isEmpty.name + '(ARGS))))(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = AppendArgs;