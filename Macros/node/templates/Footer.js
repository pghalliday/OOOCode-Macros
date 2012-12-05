function Footer(options) {
  var self = this;
  options = options || {};

  var contents = '';
  contents += '#endif\n';
  contents += '\n';

  self.toString = function() {
    return contents;
  };
}
module.exports = Footer;