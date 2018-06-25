function rot13(str) { // LBH QVQ VG!
    var arr = [];
    for (var i = 0; i < str.length; i++) {
        if (str.charCodeAt(i) < 65 || str.charCodeAt(i) > 90) {
            arr.push(str[i]);
        }
        else
            if (str.charCodeAt(i) >= 78) {
                arr.push(String.fromCharCode(str.charCodeAt(i) - 13));
            }
        else
            {
                arr.push(String.fromCharCode(str.charCodeAt(i) + 13));
            }
    }
    return arr.join("");
}
  
rot13("SERR PBQR PNZC");  // 你可以修改这一行来测试你的代码