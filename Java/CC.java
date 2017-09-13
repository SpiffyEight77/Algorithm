import java.io.*;
import java.util.*;
public class CC{
    public void get(double c){
        double f=1.8*c+32;
        System.out.println(f);
        //return f;
    }
    public CC(double c){
        System.out.println(1.8*c+32);
    }
    public static void main(String args[]){
        Scanner cin = new Scanner(System.in);
        double c=cin.nextDouble();
        //CC convert= new CC();
        //System.out.println("f="+convert.get(c));
        new CC(c);
    }
}