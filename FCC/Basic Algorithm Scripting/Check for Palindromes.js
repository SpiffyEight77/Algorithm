function palindrome(str) {
    str = str.replace(/[\W_]/g,'');
    return str.toLowerCase() == str.split("").reverse().join("").toLowerCase();
  }

  palindrome("eye");