var HeaderBase = require('../HeaderBase'),
    Quote = require('../../templates/macros/Quote')
    util = require('util');

function QuoteHeader(options) {
  options = options || {};
  options.name = options.name || 'OOOQuote';

  var quote = new Quote({
    name: options.name
  });

  QuoteHeader.super_.call(this, {
    name: options.name,
    macros: [
      quote
    ]
  });
}
util.inherits(QuoteHeader, HeaderBase);
module.exports = QuoteHeader
