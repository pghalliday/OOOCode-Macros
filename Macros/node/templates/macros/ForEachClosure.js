function ForEachClosure(options) {
  var self = this;  
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + (options.maxIterations - 1) + '_0(MACRO,CLOSURE_AND_LISTS...) MACRO(0,' + options.isEmpty.name + '(' + options.postList.name + '(1,CLOSURE_AND_LISTS)),' + (options.maxIterations - 1) + ',' + options.list.name + '(' + options.preList.name + '(0,CLOSURE_AND_LISTS)),' + options.list.name + '(' + options.preList.name + '(1,CLOSURE_AND_LISTS)),)\n';
  contents += '#define ' + self.name + (options.maxIterations - 1) + '_1(MACRO,CLOSURE_AND_LISTS...)\n';
  contents += '\n';
  for (var iteration = options.maxIterations - 1; iteration > 0; iteration--) {
    contents += '#define ' + self.name  + (iteration - 1) + '_0(MACRO,CLOSURE_AND_LISTS...) MACRO(' + ((iteration - 1) ? 0 : 1) + ',' + options.isEmpty.name + '(' + options.postList.name + '(1,CLOSURE_AND_LISTS)),' + (iteration - 1) + ',' + options.list.name + '(' + options.preList.name + '(0,CLOSURE_AND_LISTS)),' + options.list.name + '(' + options.preList.name + '(1,CLOSURE_AND_LISTS)),' + options.simplePaste.name + '(' + self.name + iteration + '_,' + options.isEmpty.name + '(' + options.postList.name + '(1,CLOSURE_AND_LISTS)))(MACRO,' + options.list.name + '(' + options.preList.name + '(0,CLOSURE_AND_LISTS)),' + options.postList.name + '(1,CLOSURE_AND_LISTS)))\n';
    contents += '#define ' + self.name  + (iteration - 1) + '_1(MACRO,CLOSURE_AND_LISTS...)\n';
    contents += '\n';
  }
  contents += '#define ' + self.name + '(MACRO,CLOSURE_AND_LISTS...) ' + options.simplePaste.name + '(' + self.name + '0_,' + options.isEmpty.name + '(' + options.postList.name + '(0,CLOSURE_AND_LISTS)))(MACRO,CLOSURE_AND_LISTS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = ForEachClosure;