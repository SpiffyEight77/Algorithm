function palindrome(str) {
    str = str.replace(/\W\s_/gi,'');
    return str.toLowerCase() == str.split("").reverse().join("").toLowerCase();
  }

  palindrome("eye");

  console.log(palindrome("eye"));