#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int ans = 0,n,u = 0,d = 0,a[3][110],up[110] = {0},down[110] = {0};
int main()
{
    cin>>n;
    for (int i = 1; i <= 2; i++)
        for (int j = 1; j <= n; j++)
            cin>>a[i][j];
    for (int i = 1; i <= n; i++)
    {
        u+=a[1][i];
        up[i] = u;
    }

    for (int i = n; i >= 1; i--)
    {
        d+=a[2][i];
        down[i] = d;
    }

    for (int i = 1; i <= n; i++)
    {
        ans = max(ans,up[i]+down[i]);
    }

    cout<<ans<<endl;
    return 0;
}