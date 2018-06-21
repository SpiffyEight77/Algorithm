function titleCase(str) {
    var array = str.toLowerCase().split(" ");
    for (var i = 0; i < array.length; i++) {
        array[i] = array[i][0].toUpperCase() + array[i].substring(1,array[i].length);
    }
    return array.join(" ");
}
  
titleCase("I'm a little tea pot");

console.log(titleCase("I'm a little tea pot"));