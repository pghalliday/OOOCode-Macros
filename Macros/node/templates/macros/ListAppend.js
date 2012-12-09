function ListAppend(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '00(ARGS...) ' + options.list.name + '(' + options.pre.name + '(ARGS), ' + options.post.name + '(ARGS))\n';
  contents += '#define ' + self.name + '01(ARGS...) ' + options.list.name + '(' + options.pre.name + '(ARGS))\n';
  contents += '#define ' + self.name + '10(ARGS...) ' + options.list.name + '(' + options.post.name + '(ARGS))\n';
  contents += '#define ' + self.name + '11(ARGS...) ' + options.list.name + '()\n';
  contents += '#define ' + self.name + '(ARGS...) ' + options.simplePaste.name + '(' + self.name + ',' + options.simplePaste.name + '(' + options.isEmpty.name + '(' + options.pre.name + '(ARGS)),' + options.isEmpty.name + '(' + options.post.name + '(ARGS))))(ARGS)\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = ListAppend;