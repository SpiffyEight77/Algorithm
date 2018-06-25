function repeat(str, num) {
    var array = [];

    for (var i = 0; i < num; i++) {
        array[i] = str;
    }

    return array.join("");
}
  
repeat("abc", 3);