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
int n,ans,a[Maxn];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    ans = 0;
    for (int i = 1; i < n-1; i++)
        if( (a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1]) )
            ans++;
    cout<<ans<<endl;
    return 0;
}