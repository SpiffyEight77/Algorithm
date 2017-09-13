#include<cstdio>
#include<iostream>
using namespace std;

int gcd(int x,int y)
{
    int t;
    while(y != 0)
    {
        t = y;
        y = x % y;
        x = t;
    }
    return x;
}
int main()
{
    int w,y,t,c;
    while(scanf("%d %d",&w,&y)!=EOF)
    {
        c = 0;
        if(w > y)
            t=w;
            else
                t=y;
        for(int i=t;i<=6;i++)
            if(i>=t)
                c++;
        if(c == 0)
            printf("0/1\n");
        else
        if(c == 6)
            printf("1/1\n");
        else
            printf("%d/%d\n",c/gcd(c,6),6/gcd(c,6));
    }
    return 0;
}