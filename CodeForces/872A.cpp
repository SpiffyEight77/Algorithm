#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
typedef long double ld;
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
int n,m,x,a,b,c[Maxn],d[Maxn];
int main()
{
    a = 0; b = 0;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        c[x] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        d[x] = 1;
    }
    for (int i = 1; i <= 9; i++)
        if(c[i] && d[i])
        {
            cout<<i<<endl;
            return 0;
        }
    for (int i = 1; i <= 9; i++)
        if(c[i])
        {
            a = i;
            break;
        } 
    for (int i = 1; i <= 9; i++)
        if(d[i])
        {
            b = i;
            break;
        }
    cout<<min(a,b)<<max(a,b)<<endl;
    return 0;
}