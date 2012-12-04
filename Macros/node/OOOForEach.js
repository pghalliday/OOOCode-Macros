var fs = require('fs');

var MAX_ARGUMENTS = 10;
var MAX_ITERATIONS = 50;
var FILE = __dirname + '/../src/OOOForEach.h';

var contents = '';
contents += '/*\n';
contents += ' * NB. Generated File\n';
contents += ' * To regenerate run...\n';
contents += ' * node ../node/OOOForEach.js\n';
contents += ' */\n';
contents += '\n';
contents += '#ifndef OOOForEach_H\n';
contents += '#define OOOForEach_H\n';
contents += '\n';
contents += '#include "OOOIsEmpty.h"\n';
contents += '#include "OOOSimplePaste.h"\n';
contents += '\n';

for (var argumentCount = 1; argumentCount <= MAX_ARGUMENTS; argumentCount++) {
  var args = '';
  for (var argument = 0; argument < argumentCount; argument++) {
    if (argument > 0) {
      args += ',';
    }
    args += 'ARG' + argument + '\\\n';
  }
  contents += '#define OOOForEach' + argumentCount + '_' + (MAX_ITERATIONS - 1) + '_0(MACRO,' + args + ',ARGS...) MACRO(' + ((MAX_ITERATIONS - 1) ? 0 : 1) + ',OOOIsEmpty(ARGS),' + (MAX_ITERATIONS - 1) + ',' + args + ',)\n';
  contents += '#define OOOForEach' + argumentCount + '_' + (MAX_ITERATIONS - 1) + '_1(MACRO,ARGS...)\n';
  contents += '\n';
  for (var iteration = MAX_ITERATIONS - 1; iteration > 0; iteration--) {
    contents += '#define OOOForEach' + argumentCount + '_' + (iteration - 1) + '_0(MACRO,' + args + ',ARGS...) MACRO(' + ((iteration - 1) ? 0 : 1) + ',OOOIsEmpty(ARGS),' + (iteration - 1) + ',' + args + ',OOOSimplePaste(OOOForEach' + argumentCount + '_' + iteration + '_,OOOIsEmpty(ARGS))(MACRO,ARGS))\n';
    contents += '#define OOOForEach' + argumentCount + '_' + (iteration - 1) + '_1(MACRO,ARGS...)\n';
    contents += '\n';
  }   
}
contents += '#define OOOForEach(MACRO,ARG_COUNT,ARGS...) OOOSimplePaste(OOOSimplePaste(OOOSimplePaste(OOOForEach,ARG_COUNT),_0_),OOOIsEmpty(ARGS))(MACRO,ARGS)\n';
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
