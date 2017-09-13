import java.io.*;
import java.util.*;
public class test2{
    public static void main(String args[]){
        Scanner cin = new Scanner(System.in);
        double x,k;
        double sum;
        boolean f = true;
        int num;
        x = cin.nextDouble();
        k = x; 
        sum = 0;
        num = cin.nextInt();
        double red[] = new double[num+1];
        for(int i = 1; i <= num; i++){
            red[i] = Math.random() * x;

            if(red[i] < 0.01 && x > 0.01){
                red[i] = 0.01;
            }

            else if(x - red[i] < (num-i)*0.01)
                 red[i] = Math.random();

            System.out.println("i = "+i+" "+red[i]);
            x -= red[i];
        }
        System.out.println("x = "+x);
        System.out.println();
        for(int i = 1; i <= num; i++){
            //if(red[i]<0.01)
                //System.out.println("i= "+i+" "+red[i]);
                System.out.println(red[i]);
            sum+=red[i];
        }
        System.out.println(sum+x);
        System.out.println();  
    }
} 