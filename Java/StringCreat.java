public class StringCreat{
    public static void main(String args[]){
        String s1;
        s1 = "I ";
        char[] charArr = new char[]{'L','o','v','e',' '};
        String s2 = new String(charArr);
        byte[] byteArr = new byte[]{74,97,118,97};
        String s3 = new String(byteArr);
        System.out.println(s1+s2+s3+"!"); 
    }
} 