function truncate(str, num) {
    
    if (num >= str.length) {
        return str;
    }
    else 
        return num > 3 ? str.slice(0,num - 3) + "..." : str.slice(0,num) + "...";
}
  
truncate("A-tisket a-tasket A green and yellow basket", 11);