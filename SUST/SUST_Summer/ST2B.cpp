#include<iostream>
#include<cstring>
using namespace std;
int n,x,y;
int gcd(int a,int b)
{
    int t;
    while(b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        printf("%d\n",x/gcd(x,y)*y);
    }
    return 0;
}