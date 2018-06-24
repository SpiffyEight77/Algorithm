function largestOfFour(arr) {
    
    var a = new Array(arr.length);

    for (var i = 0; i < arr.length; i++) {
        var res = arr[i][0];
        for (var j = 1; j < arr[i].length; j++) {
            if (res < arr[i][j])
                res = arr[i][j];
        }
        a[i] = res;
    }

    return a;
}
  
largestOfFour([[4, 5, 1, 3], [13, 27, 18, 26], [32, 35, 37, 39], [1000, 1001, 857, 1]]);