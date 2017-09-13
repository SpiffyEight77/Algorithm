import java.util.*;
import java.io.*;
public class a99{
    public static void main(String args[]){
        /*for(int i=1;i<=9;i++){
            for(int j=1;j<=i;j++){
                System.out.print(i+"*"+j+"="+i*i+" ");
            }
            System.out.println();
        }*/
        /*Scanner cin = new Scanner(System.in);
        int date;
        date=cin.nextInt();
        switch(date)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:System.out.println("上班"); break;
            case 6:
            case 7:System.out.println("休息"); break;
        }*/
        int t;
        int a[] = {12,26,27,58,6,89,42};
        for(int i=0;i<a.length;i++)
        {
            for(int j=i+1;j<a.length;j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        for(int i=0;i<a.length;i++)
            System.out.print(a[i]+" ");
            System.out.println();
    }
}