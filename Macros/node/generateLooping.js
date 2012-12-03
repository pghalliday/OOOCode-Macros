var fs = require('fs');

var MAX_ARGUMENTS = 100;
var FILE = '../src/OOOLooping.h';

// OOOForEach
var contents = '';
contents += '#ifndef OOOLooping_H\n';
contents += '#define OOOLooping_H\n';
contents += '\n';
contents += '#include "OOOEmptyArguments.h"\n';
contents += '#include "OOOPastingAndQuoting.h"\n';
contents += '\n';
contents += '#define OOOForEach' + (MAX_ARGUMENTS - 1) + '_0(MACRO, ARG, ARGS...) MACRO(ARG)\n';
contents += '#define OOOForEach' + (MAX_ARGUMENTS - 1) + '_1(MACRO, ARGS...)\n';
contents += '\n';
for (var i = MAX_ARGUMENTS - 1; i > 0; i--) {
  contents += '#define OOOForEach' + (i - 1) + '_0(MACRO, ARG, ARGS...) MACRO(ARG) OOOPaste(OOOForEach' + i + '_, OOOIsEmpty(ARGS))(MACRO, ARGS)\n';
  contents += '#define OOOForEach' + (i - 1) + '_1(MACRO, ARGS...)\n';
  contents += '\n';
} 
contents += '#define OOOForEach(MACRO, ARGS...) OOOPaste(OOOForEach0_, OOOIsEmpty(ARGS))(MACRO, ARGS)\n';
contents += '\n';
contents += '#endif\n';

// Write out the file
fs.writeFile(FILE, contents, function(error) {
  if (error) {
    console.log(error);
  } else {
    console.log(contents);
  }
});
