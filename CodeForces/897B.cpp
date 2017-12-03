#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll ans,k,p,sum,t;
ll palindrome(ll x)
{
    sum = x; t = x;
    while(t)
    {
        sum = sum * 10 + t % 10;
        t/=10;
    }
    return sum;
}
int main()
{
    cin>>k>>p;
    ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans = ans + palindrome(i) % p;
    }
    printf("%lld\n",ans % p);
    return 0;
}