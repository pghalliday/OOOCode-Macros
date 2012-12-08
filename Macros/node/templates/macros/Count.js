/*
 * largely derived from the IsEmpty implementation
 */

function Count(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '_Arg( \\\n';
  for (var argument = 0; argument <= options.maxArguments; argument++) {
    contents += '_' + argument + ', \\\n';    
  }
  contents += 'ARGS...) _' + (options.maxArguments) + '\n';
  contents += '#define ' + self.name + '_Commas(ARGS...) ' + self.name + '_Arg(ARGS, \\\n';
  for (var argument = options.maxArguments; argument > 0; argument--) {
    contents += (argument + ', \\\n');    
  }
  contents += '0)\n';    
  contents += '\n';
  contents += '#define ' + self.name + '0(ARGS...) ' + self.name + '_Commas(ARGS)\n'
  contents += '#define ' + self.name + '1(ARGS...) 0\n'
  contents += '#define ' + self.name + '(ARGS...) ' + options.simplePaste.name + '(' + self.name + ', ' + options.isEmpty.name + '(ARGS))(ARGS)\n'
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Count;