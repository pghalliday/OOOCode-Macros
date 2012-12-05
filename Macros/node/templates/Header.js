function Header(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOO';

  var contents = '';
  contents += '/*\n';
  contents += ' * NB. Generated File do not edit\n';
  contents += ' */\n';
  contents += '\n';
  contents += '#ifndef ' + options.name + '_H\n';
  contents += '#define ' + options.name + '_H\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Header;