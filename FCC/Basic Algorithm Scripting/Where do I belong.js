function where(arr, num) {
    arr.push(num);
    arr.sort(function(x,y) {
        return x - y;
    }); 
    return arr.indexOf(num);
}
  
where([40, 60], 50);