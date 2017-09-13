#include<iostream>
#include<cstring>
#define M 1100
using namespace std;
int n;
long long a[M],x,y;
long long gcd(long long  x,long long y)
{
    return y == 0 ? x : gcd(y,x%y);
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        x = 1;
        for (int i = 1; i <= n; i++)
        scanf("%lld",&a[i]);
        for (int i = 1; i <= n; i++)
        {
            x = a[i]/gcd(x,a[i]) * x;
        }
        printf("%lld\n",x);
    }
    return 0;
}