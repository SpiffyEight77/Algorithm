#include<iostream>
using namespace std;
int n,m;
int gcd(int x,int y)
{
    int t;
    while(y)
    {
        t = y;
        y = x % y;
        x = t;
    }
    return x;
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        printf("%d\n",n/gcd(n,m)*m);
    }
    return 0;
}
