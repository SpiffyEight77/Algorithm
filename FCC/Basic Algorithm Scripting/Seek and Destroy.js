function destroyer(arr) {
    var array = arguments;
    for (var i = 1; i < array.length; i++) {
        arr = arr.filter(function(val) {
            return array[i] !== val;
        });
    }
    return arr;
}
destroyer([1, 2, 3, 1, 2, 3], 2, 3);