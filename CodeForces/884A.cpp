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
int n,t,ans,a[Maxn];
int main()
{
    cin>>n>>t;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        t -= (86400 - a[i]);
        if(t <= 0)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}