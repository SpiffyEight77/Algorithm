function confirmEnding(str, target) {
    for (var i = str.length - 1; i >= 0; i--) {
        if (str.substring(i,str.length) === target) {
            return true;
        }
    }
     return false;
 }
   
confirmEnding("Bastian", "n");
