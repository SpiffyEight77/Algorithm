#include<cstdio>
#include<iostream>
#include<cstring>
char s[30];
int main()
{
    int T,sec,f;
    int y,m,d;
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int month1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&T);
    while(T--)
    {
        int k = 1000;
        y = 0; m =0; d = 0; f = 0;
        scanf("%s%d",s,&sec);
            for(int i=0;i<4;i++)
                {
                    y+=k*(s[i]-'0');
                    k/=10;
                }

                k=10;
            for(int i=5;i<7;i++)
                {
                    m+=k*(s[i]-'0');
                    k/=10;
                }

                k=10;
            for(int i=8;i<=9;i++)
                {
                    d+=k*(s[i]-'0');
                    k/=10;
                }

        if(y%400 == 0 || (y%100 != 0 && y%4==0) )
            f = 1;
        

        int dd = sec/24/3600/365;

        if(sec >= 86400)
        {
            while(1)
            {
                if(d == )
            }
        }
        printf("%d-",y);
        if(m<10)
            printf("0%d-",m);
        else
            printf("%d-",m);
        
        if(d<10)
            printf("0%d\n",d);
        else
            printf("%d\n",d);
    }
    return 0;
}