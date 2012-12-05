var fs = require('fs'),
    Header = require('../templates/Header'),
    Footer = require('../templates/Footer');

function HeaderBase(options) {
  var self = this;
  options = options || {};
  options.name = options.name || 'OOO';
  options.macros = options.macros || [];

  var header = new Header({
    name: options.name
  });

  var footer = new Footer({});

  var contents = '';
  contents += header.toString();
  options.macros.forEach(function(macro) {
    contents += macro.toString();
  });
  contents += footer.toString();

  self.write = function(callback)
  {
    fs.writeFile(options.name + '.h', contents, callback);
  };
}
module.exports = HeaderBase
