#include<iostream>
using namespace std;
int T;
long long a,b,c,d,k,x,y;
long long gcd(int x,int y)
{
    return y == 0 ? x : gcd(y,x%y);
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lld/%lld%lld/%lld",&a,&b,&c,&d);
        k = gcd(a,b);
        a/=k; b/=k;
        k = gcd(c,d);
        c/=k; d/=k;
        x = a / gcd(a,c) * c;
        y = gcd(b,d);
        if(x % y)
            printf("%lld/%lld\n",x,y);
        else
            printf("%lld\n",x/y);
    }
    return 0;
}