function bouncer(arr) {
    var array = [];
    for (var i = 0; i < arr.length; i++) {
        var x = new Boolean(arr[i]);
        if (x == true) {
            array.push(arr[i]);
        } 
    }
    return array;
}
  
bouncer([7, "ate", "", false, 9]);