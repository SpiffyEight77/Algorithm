#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100010;
const int Mod = 1000000000 + 7;
ll n,ans;
ll quick(ll a,ll b)
{
    ans = 1;
    while(b)
    {
        if(b&1)
            ans = ans * a % Mod;
        b>>=1;
        a = a * a % Mod;
    }
    return ans % Mod;
}
int main()
{
    cin>>n;
    cout<<(quick(27,n) - quick(7,n) + Mod ) % Mod<<endl;
    return 0;
}