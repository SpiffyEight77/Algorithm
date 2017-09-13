#include<cstdio>
#include<iostream>
int main()
{
    int n,a,b,c,t;
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 0)
            break;
        a = 0, b = 0, c = 0, t = n;
        while(t)
        {
            a += t%10;
            t/=10;
        }

        t = n;
        while(t)
        {
            b += t%16;
            t/=16;
        }

        t = n;
        while(t)
        {
            c += t%12;
            t/=12;
        }

        if(a == b && a == c && b == c)
            printf("%d is a Sky Number.\n",n);
        else
            printf("%d is not a Sky Number.\n",n);
        //printf("%d %d %d\n",a,b,c);
    }
    return 0;
}