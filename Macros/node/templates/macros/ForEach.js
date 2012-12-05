function ForEach(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOForEach';
  options.isEmpty = options.isEmpty || 'OOOForEachIsEmpty';
  options.simplePaste = options.simplePaste || 'OOOForEachSimplePaste';
  options.maxIterations = options.maxIterations || 100;

  self.name = options.name;

  var contents = '';

  contents += '#define ' + options.name + '' + (options.maxIterations - 1) + '_0(MACRO,ARG,ARGS...) MACRO(' + ((options.maxIterations - 1) ? 0 : 1) + ',' + options.isEmpty + '(ARGS),' + (options.maxIterations - 1) + ',ARG,)\n';
  contents += '#define ' + options.name + '' + (options.maxIterations - 1) + '_1(MACRO,ARGS...)\n';
  contents += '\n';
  for (var iteration = options.maxIterations - 1; iteration > 0; iteration--) {
    contents += '#define ' + options.name + '' + (iteration - 1) + '_0(MACRO,ARG,ARGS...) MACRO(' + ((iteration - 1) ? 0 : 1) + ',' + options.isEmpty + '(ARGS),' + (iteration - 1) + ',ARG,' + options.simplePaste + '(' + options.name + '' + iteration + '_,' + options.isEmpty + '(ARGS))(MACRO,ARGS))\n';
    contents += '#define ' + options.name + '' + (iteration - 1) + '_1(MACRO,ARGS...)\n';
    contents += '\n';
  }
  contents += '#define ' + options.name + '(MACRO,ARGS...) ' + options.simplePaste + '(' + options.name + '0_,' + options.isEmpty + '(ARGS))(MACRO,ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = ForEach;