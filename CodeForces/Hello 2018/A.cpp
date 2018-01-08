#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
using ll = long long;
using ld = long double;
using namespace std;
ll ans,res,n,m;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod(ll a,ll b)
{
    ans = 1;
    while(b)
    {
        if(b&1)
            ans = ans * a ;
        b>>=1;
        a = a * a;
    }
    return ans;
}

int main()
{
    cin>>n>>m;
    res = quick_mod(2,n);
    cout<<m%res<<endl;
    return 0;
}