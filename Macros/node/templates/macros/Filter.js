function Filter(options) {
  var self = this;
  self.name = options.name;

  var contents = '';
  for (var label = 0; label < options.maxLabels; label++) {
    for (var filterLabel = 0; filterLabel < options.maxLabels; filterLabel++) {
      contents += '#define ' + (self.name + label) + '_' + filterLabel + '(ARGS...) ' + (label === filterLabel ? (options.list.name + '(ARGS)') : '') + '\n';
    }
    contents += '\n';
    contents += '#define ' + (self.name + label) + '(FIRST, LAST, ITERATION, ARGS...) \\\n';
    contents += '  ' + options.simplePaste.name + '(' + (self.name + label) + '_,' + options.pre.name + '(1,' + options.pre.name + '(ARGS)))(' + options.post.name + '(1,' + options.pre.name + '(ARGS))) \\\n';
    contents += '  ' + options.appendArgs.name + '(' + options.isEmpty.name + '(' + options.simplePaste.name + '(' + (self.name + label) + '_,' + options.pre.name + '(1,' + options.pre.name + '(ARGS)))(' + options.post.name + '(1,' + options.pre.name + '(ARGS)))), ' + options.post.name + '(ARGS))\n';
    contents += '\n';
  }
  contents += '#define ' + self.name + '(LABEL,LISTS...) \\\n';
  contents += '  ' + options.forEachList.name + '(' + options.simplePaste.name + '(' + self.name + ',LABEL),LISTS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Filter;
