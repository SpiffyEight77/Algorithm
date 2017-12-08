#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll n,a,ans,k,Mod;
ll quick_mod(ll k)
{
    ans = 1;
    a = 2;
    while(k)
    {
        if(k&1)
            ans = ans * a % Mod;
        k>>=1;
        a = a * a % Mod;
    }
    return ans % Mod;
}
int main()
{
    while(scanf("%lld",&n) && n)
    {
        Mod = n;
        cout<<(quick_mod(n-1) + 1) % Mod<<endl;
    }
    return 0;
}