/*
 * This stuff is derived directly from the following article by Jens Gustedt (June 8, 2010)
 *
 * http://gustedt.wordpress.com/2010/06/08/detect-empty-macro-arguments/
 */

/*
 * The following construct exposes the macro OOOIsEmpty that can be used to test
 * if a variadic argument list is empty or not. If the list is empty then it
 * expands to 1, if it is not then it will expand to 0
 *
 * This macro is limited to checking up to 120 arguments - if used to check an
 * argument list longer than this it will expand to something sort of undefined
 * (actually the 121st argument which in this context is undefined)
 *
 * The macro works by checking if the following construct expands to contain a comma...
 *
 *   TriggerParenthesis ARGS ()
 *
 * using the property that a function macro only expands if it is followed by
 * parentheses otherwise it is not expanded at all.
 *
 * When expanded TriggerParenthesis() results in a comma. Thus if ARGS expands
 * to an empty argument list then this construct will expand to a comma.
 *
 * In order for the macro to work properly though it needs to discount a number
 * of false positive conditions.
 *
 * 1) We need to check that ARGS does not already contain a comma
 *
 * 2) We need to check that TriggerParenthesis ARGS does not expand to anything
 * containing a comma
 *
 * 3) We need to check that ARGS() does not expand to anything containing a comma
 */

/*
 * The check for a comma works by expanding to 1 for argument lists of between 2 and 120 arguments
 * but 0 for argument lists of 1 argument (note that to the preprocessor an empty argument list
 * actually contains 1 argument which is the empty token)
 */

function IsEmpty(options) {
  var self = this;
  self.name = options.name;

  var contents = '';

  contents += '#define ' + self.name + '_Arg( \\\n';
  for (var argument = 0; argument < options.maxArguments; argument++) {
    contents += '_' + argument + ', \\\n';    
  }
  contents += 'ARGS...) _' + (options.maxArguments - 1) + '\n';
  contents += '#define ' + self.name + '_HasComma(ARGS...) ' + self.name + '_Arg(ARGS, \\\n';
  for (var argument = 0; argument < options.maxArguments - 2; argument++) {
    contents += '1, \\\n';    
  }
  contents += '0, 0)\n';    
  contents += '\n';
  contents += '#define ' + self.name + '_IsEmptyCase0001 ,\n';
  contents += '#define ' + self.name + '_Paste5(_0, _1, _2, _3, _4) _0 ## _1 ## _2 ## _3 ## _4\n';
  contents += '#define _' + self.name + '(_0, _1, _2, _3) ' + self.name + '_HasComma(' + self.name + '_Paste5(' + self.name + '_IsEmptyCase, _0, _1, _2, _3))\n';
  contents += '#define ' + self.name + '_TriggerParenthesis(ARGS...) ,\n';
  contents += '#define ' + self.name + '(ARGS...) \\\n';
  contents += '_' + self.name + '( \\\n';
  contents += '   ' + self.name + '_HasComma(ARGS), \\\n';
  contents += '   ' + self.name + '_HasComma(' + self.name + '_TriggerParenthesis ARGS), \\\n';
  contents += '   ' + self.name + '_HasComma(ARGS (/*empty*/)), \\\n';
  contents += '   ' + self.name + '_HasComma(' + self.name + '_TriggerParenthesis ARGS (/*empty*/)) \\\n';
  contents += ')\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = IsEmpty;