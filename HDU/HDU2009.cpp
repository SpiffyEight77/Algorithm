#include<cstdio>
#include<iostream>
#include<cmath>
int main()
{
    double x,sum;
    int n;
    while(scanf("%lf %d",&x,&n)!=EOF)
    {
        sum = x;
        n--;
        while(n--)
        {
            sum+=sqrt(x);
            x=sqrt(x);
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}