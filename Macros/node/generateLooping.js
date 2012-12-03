var fs = require('fs');

var MAX_ARGUMENTS = 10;
var MAX_ITERATIONS = 50;
var FILE = '../src/OOOLooping.h';

// OOOForEach
var contents = '';
contents += '#ifndef OOOLooping_H\n';
contents += '#define OOOLooping_H\n';
contents += '\n';
contents += '#include "OOOEmptyArguments.h"\n';
contents += '#include "OOOPastingAndQuoting.h"\n';
contents += '\n';

for (var argumentCount = 1; argumentCount <= MAX_ARGUMENTS; argumentCount++) {
  var args = '';
  for (var argument = 0; argument < argumentCount; argument++) {
    if (argument > 0) {
      args += ', ';
    }
    args += 'ARG' + argument + ' \\\n';
  }
  contents += '#define OOOForEach' + argumentCount + '_' + (MAX_ITERATIONS - 1) + '_0(MACRO, ' + args + ', ARGS...) MACRO(' + args + ')\n';
  contents += '#define OOOForEach' + argumentCount + '_' + (MAX_ITERATIONS - 1) + '_1(MACRO, ARGS...)\n';
  contents += '\n';
  for (var iteration = MAX_ITERATIONS - 1; iteration > 0; iteration--) {
    contents += '#define OOOForEach' + argumentCount + '_' + (iteration - 1) + '_0(MACRO, ' + args + ', ARGS...) MACRO(' + args + ') OOOPaste(OOOForEach' + argumentCount + '_' + iteration + '_, OOOIsEmpty(ARGS))(MACRO, ARGS)\n';
    contents += '#define OOOForEach' + argumentCount + '_' + (iteration - 1) + '_1(MACRO, ARGS...)\n';
    contents += '\n';
  }   
}
contents += '#define OOOForEach(MACRO, ARG_COUNT, ARGS...) OOOPaste(OOOPaste(OOOPaste(OOOForEach, ARG_COUNT), _0_), OOOIsEmpty(ARGS))(MACRO, ARGS)\n';
contents += '\n';
contents += '#endif\n';

// Write out the file
fs.writeFile(FILE, contents, function(error) {
  if (error) {
    console.log(error);
  } else {
    console.log('done');
  }
});
