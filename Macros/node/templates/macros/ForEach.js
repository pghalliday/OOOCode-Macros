function ForEach(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + (options.maxIterations - 1) + '_0(MACRO,ARG,ARGS...) MACRO(' + ((options.maxIterations - 1) ? 0 : 1) + ',' + options.isEmpty.name + '(ARGS),' + (options.maxIterations - 1) + ',ARG,)\n';
  contents += '#define ' + self.name + (options.maxIterations - 1) + '_1(MACRO,ARGS...)\n';
  contents += '\n';
  for (var iteration = options.maxIterations - 1; iteration > 0; iteration--) {
    contents += '#define ' + self.name + (iteration - 1) + '_0(MACRO,ARG,ARGS...) MACRO(' + ((iteration - 1) ? 0 : 1) + ',' + options.isEmpty.name + '(ARGS),' + (iteration - 1) + ',ARG,' + options.simplePaste.name + '(' + self.name + iteration + '_,' + options.isEmpty.name + '(ARGS))(MACRO,ARGS))\n';
    contents += '#define ' + self.name + (iteration - 1) + '_1(MACRO,ARGS...)\n';
    contents += '\n';
  }
  contents += '#define ' + self.name + '(MACRO,ARGS...) ' + options.simplePaste.name + '(' + self.name + '0_,' + options.isEmpty.name + '(ARGS))(MACRO,ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = ForEach;