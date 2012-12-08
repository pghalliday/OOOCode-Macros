var ForEachHeader = require('./headers/files/ForEachHeader'),
    IsEmptyHeader = require('./headers/files/IsEmptyHeader'),
    PasteHeader = require('./headers/files/PasteHeader'),
    QuoteHeader = require('./headers/files/QuoteHeader'),
    SimplePasteHeader = require('./headers/files/SimplePasteHeader'),
    CountHeader = require('./headers/files/CountHeader'),
    PreHeader = require('./headers/files/PreHeader'),
    PostHeader = require('./headers/files/PostHeader'),
    ListHeader = require('./headers/files/ListHeader'),
    ForEachListHeader = require('./headers/files/ForEachListHeader'),
    AppendArgsHeader = require('./headers/files/AppendArgsHeader');
    FilterHeader = require('./headers/files/FilterHeader');

var forEachHeader = new ForEachHeader({
      name: 'OOOForEach',
      maxIterations: 1000
    }),
    isEmptyHeader = new IsEmptyHeader({
      name: 'OOOIsEmpty',
      maxArguments: 1000
    }),
    pasteHeader = new PasteHeader({
      name: 'OOOPaste',
      maxArguments: 1000
    }),
    quoteHeader = new QuoteHeader({
      name: 'OOOSimplePaste'
    }),
    simplePasteHeader = new SimplePasteHeader({
      name: 'OOOSimplePaste'
    }),
    countHeader = new CountHeader({
      name: 'OOOCount',
      maxArguments: 1000
    }),
    preHeader = new PreHeader({
      name: 'OOOPre',
      maxArguments: 1000
    }),
    postHeader = new PostHeader({
      name: 'OOOPost',
      maxArguments: 1000
    }),
    listHeader = new ListHeader({
      name: 'OOOList',
      maxSize: 1000
    }),
    forEachListHeader = new ForEachListHeader({
      name: 'OOOForEachList',
      maxIterations: 100,
      maxSize: 1000
    }),
    appendArgsHeader = new AppendArgsHeader({
      name: 'OOOAppendArgs',
      maxArguments: 1000
    }),
    filterHeader = new FilterHeader({
      name: 'OOOFilter',
      maxArguments: 1000,
      maxIterations: 100,
      maxLabels: 100
    });

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
forEachListHeader.write(function(error) {
  console.log(error || 'ForEachList header written');
});
appendArgsHeader.write(function(error) {
  console.log(error || 'AppendArgs header written');
});
filterHeader.write(function(error) {
  console.log(error || 'Filter header written');
});
