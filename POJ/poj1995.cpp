#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll t,n,x,y,res,ans,Mod;
ll quick_mod(ll a,ll b)
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
    cin>>t;
    while(t--)
    {
        res = 0;
        cin>>Mod;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            res = (res + quick_mod(x,y)) % Mod;
        }
        cout<<res%Mod<<endl;
    }
    return 0;
}