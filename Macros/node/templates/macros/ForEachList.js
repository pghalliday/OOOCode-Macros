function ForEachList(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOForEachList';
  options.list = options.list || 'OOOForEachList_List';
  options.simplePaste = options.simplePaste || 'OOOForEachList_SimplePaste';
  options.pre = options.pre || 'OOOForEachList_Pre';
  options.post = options.post || 'OOOForEachList_Post';
  options.maxIterations = options.maxIterations || 100;
  
  self.name = options.name;

  var contents = '';

  contents += '#define ' + options.name + (options.maxIterations - 1) + '_0(MACRO,ARGS...) MACRO(0,' + options.isEmpty + '(' + options.post + '(ARGS)),6,' + options.list + '(' + options.pre + '(ARGS)),\n';
  contents += '#define ' + options.name + (options.maxIterations - 1) + '_1(MACRO,ARGS...)\n';
  contents += '\n';
  for (var iteration = options.maxIterations - 1; iteration > 0; iteration--) {
    contents += '#define ' + options.name + '' + (iteration - 1) + '_0(MACRO,ARGS...) MACRO(' + ((iteration - 1) ? 0 : 1) + ',' + options.isEmpty + '(' + options.post + '(ARGS)),' + (iteration - 1) + ',' + options.list + '(' + options.pre + '(ARGS)),' + options.simplePaste + '(' + options.name + iteration + '_,' + options.isEmpty + '(' + options.post + '(ARGS)))(MACRO,' + options.post + '(ARGS)))\n';
    contents += '#define ' + options.name + '' + (iteration - 1) + '_1(MACRO,ARGS...)\n';
    contents += '\n';
  }
  contents += '#define ' + options.name + '(MACRO,ARGS...) ' + options.simplePaste + '(' + options.name + '0_,' + options.isEmpty + '(ARGS))(MACRO,ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = ForEachList;