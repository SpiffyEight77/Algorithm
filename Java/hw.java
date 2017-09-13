import java.util.*;
import java.io.*;
public class hw{
    public static void main(String args[]){
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