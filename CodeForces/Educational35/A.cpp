#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}

ll n,a[Maxn],ans,res,l,r;
int main()
{
    cin>>n;
    ans = Mod;
    res = Mod;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        ans = min(ans,a[i]);
    }

    l = 0;
    r = 0;
    for (int i = 1; i <= n; i++)
        if(a[i] == ans && l == 0)
            l = i; 
        else
            if(a[i] == ans && l != 0)
            {
                res = min(res,i - l);
                l = i;
            }
    cout<<res<<endl;
    return 0;
}