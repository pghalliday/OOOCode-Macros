var ForEachHeader = require('./headers/files/ForEachHeader'),
    IsEmptyHeader = require('./headers/files/IsEmptyHeader'),
    PasteHeader = require('./headers/files/PasteHeader'),
    QuoteHeader = require('./headers/files/QuoteHeader'),
    SimplePasteHeader = require('./headers/files/SimplePasteHeader');

var forEachHeader = new ForEachHeader(),
    isEmptyHeader = new IsEmptyHeader(),
    pasteHeader = new PasteHeader(),
    quoteHeader = new QuoteHeader(),
    simplePasteHeader = new SimplePasteHeader();

forEachHeader.write(function(error) {
  console.log(error || 'ForEach header written');
});
isEmptyHeader.write(function(error) {
  console.log(error || 'IsEmpty header written');
});
pasteHeader.write(function(error) {
  console.log(error || 'Paste header written');
});
quoteHeader.write(function(error) {
  console.log(error || 'Quote header written');
});
simplePasteHeader.write(function(error) {
  console.log(error || 'SimplePaste header written');
});
