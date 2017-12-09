#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int n,res,ans,ans_path[110]={0},cost[2][110],r[110];
int main()
{
    cin>>n;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n - 1; j++)
            cin>>cost[i][j];
    for (int i = 0; i < n; i++)
        cin>>r[i];

    for (int i = 0; i < n; i++)
    {
        ans = r[i];
        for (int j = 0; j < i; j++)
            ans += cost[0][j];
        for (int j = n-1; j >= i; j--)
            ans += cost[1][j];
        ans_path[i] = ans;
    }

    res = (1 << 30);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(ans_path[i] + ans_path[j] < res && i != j)
                res = ans_path[i] + ans_path[j];
    cout<<res<<endl;
    return 0;
}