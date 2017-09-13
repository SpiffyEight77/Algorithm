public class Stringsub{
    public static void main(String args[]){
        String s = "子串示例";
        int len = s.length();
        for(int i = 0; i < len-1; i++)
            for(int j = i + 1; j <=len; j++)
                System.out.println(s.substring(i,j));
    }
}