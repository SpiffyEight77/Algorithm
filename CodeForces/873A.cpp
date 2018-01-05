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
int n,k,x,ans,a[Maxn];
int main()
{
    cin>>n>>k>>x;
    ans = k*x;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n - k; i++)
        ans+=a[i];
    cout<<ans<<endl;
    return 0;
}