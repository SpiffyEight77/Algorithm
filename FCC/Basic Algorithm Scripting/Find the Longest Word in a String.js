function findLongestWord(str) {
    
    var array = str.split(" ");
    var res = array[0];
    for (var i = 0; i < array.length; i++) {
        if (res.length < array[i].length) {
            res = array[i];
        }
    }
    return res.length;
}
  
  
findLongestWord("The quick brown fox jumped over the lazy dog");