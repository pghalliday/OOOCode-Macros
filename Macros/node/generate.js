var ForEachHeader = require('./headers/files/ForEachHeader'),
    IsEmptyHeader = require('./headers/files/IsEmptyHeader'),
    PasteHeader = require('./headers/files/PasteHeader'),
    QuoteHeader = require('./headers/files/QuoteHeader'),
    SimplePasteHeader = require('./headers/files/SimplePasteHeader'),
    CountHeader = require('./headers/files/CountHeader'),
    PreHeader = require('./headers/files/PreHeader'),
    PostHeader = require('./headers/files/PostHeader'),
    ListHeader = require('./headers/files/ListHeader');

var forEachHeader = new ForEachHeader(),
    isEmptyHeader = new IsEmptyHeader(),
    pasteHeader = new PasteHeader(),
    quoteHeader = new QuoteHeader(),
    simplePasteHeader = new SimplePasteHeader(),
    countHeader = new CountHeader(),
    preHeader = new PreHeader(),
    postHeader = new PostHeader(),
    listHeader = new ListHeader();

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
countHeader.write(function(error) {
  console.log(error || 'Count header written');
});
preHeader.write(function(error) {
  console.log(error || 'Pre header written');
});
postHeader.write(function(error) {
  console.log(error || 'Post header written');
});
listHeader.write(function(error) {
  console.log(error || 'List header written');
});
