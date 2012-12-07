/*
 * largely derived from the IsEmpty implementation
 */

function Count(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOOCount';
  options.maxArguments = options.maxArguments || 1000;
  options.simplePaste = options.simplePaste || 'OOOCountSimplePaste';
  options.isEmpty = options.isEmpty || 'OOOCountIsEmpty';

  self.name = options.name;

  var contents = '';

  contents += '#define ' + options.name + '_Arg( \\\n';
  for (var argument = 0; argument <= options.maxArguments; argument++) {
    contents += '_' + argument + ', \\\n';    
  }
  contents += 'ARGS...) _' + (options.maxArguments) + '\n';
  contents += '#define ' + options.name + '_Commas(ARGS...) ' + options.name + '_Arg(ARGS, \\\n';
  for (var argument = options.maxArguments; argument > 0; argument--) {
    contents += (argument + ', \\\n');    
  }
  contents += '0)\n';    
  contents += '\n';
  contents += '#define ' + options.name + '0(ARGS...) ' + options.name + '_Commas(ARGS)\n'
  contents += '#define ' + options.name + '1(ARGS...) 0\n'
  contents += '#define ' + options.name + '(ARGS...) ' + options.simplePaste + '(' + options.name + ', ' + options.isEmpty + '(ARGS))(ARGS)\n'
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Count;