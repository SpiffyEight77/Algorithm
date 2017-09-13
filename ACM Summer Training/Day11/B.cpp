#include<iostream>
using namespace std;
int T,a,b,c,d,e,f,ans;
int gcd(int x,int y)
{
    return y == 0 ? x : gcd(y,x%y);
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        ans = b/gcd(b,d)*d;
        e = a*ans/b+c*ans/d;
        f = ans;
        printf("%d %d\n",e/gcd(e,f),f/gcd(e,f));
    }
    return 0;
}