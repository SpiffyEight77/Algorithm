import java.io.*;
import java.util.*;
import java.text.DecimalFormat;
public class Red{
    public static void main(String args[]){
        Scanner cin = new Scanner(System.in);
        
        double x;
        double sum;
        int num;
        double k;
        boolean f = true;

        while(cin.hasNext()){
            x = cin.nextDouble();
            num = cin.nextInt();
            sum = 0;
        double red[] = new double[num+1];
        System.out.println();
        for(int i = 1; i <= num-1; i++){
            red[i] = Math.random() * x;
            red[i] = Math.round(red[i]*100+0.5)/100.0;
            if(red[i] < 0.01 || x - red[i] > (num-i)*0.01 ){
                while(f){
                    if(x > 1000 && num >100){
                        red[i] = Math.random()*17;
                        red[i] = Math.round(red[i]*100+0.5)/100.0;
                    }
                    else    { red[i] = Math.random()*1; red[i] = Math.round(red[i]*100+0.5)/100.0; }               
                    if(red[i] >= 0.01 && x - red[i] >= (num-i)*0.01)
                        break;
                }
            } 
            x -= red[i];
        }

        red[num] = Math.round(x*100+0.5)/100.0;

        for(int i = 1; i <= num; i++){
            sum += red[i];
            System.out.println(red[i]);
        }

        //System.out.println(Math.round(sum*100+0.5)/100.0);

        k = Math.random()*num;
        while(k<1)
        {
            k = Math.random()*num;
            if(k >= 1)
                break;
        }

        System.out.println();
        System.out.println(red[(int)k]);
        System.out.println();
        }
    }
} 