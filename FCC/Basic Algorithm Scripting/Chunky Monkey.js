function chunk(arr, size) {
    var array = [];
    for (var i = 0; i < arr.length; i+=size) {
        array.push(arr.slice(i,i+size));
    }
    return array;
}
  
chunk(["a", "b", "c", "d"], 2);

console.log(chunk(["a", "b", "c", "d"], 2));