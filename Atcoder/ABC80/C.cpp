#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
typedef long long ll;
int f[110][20],p[110][20],ans,res,n;
int main()
{
    cin>>n;

    cout<<(n>>2)<<endl;
    cout<<((n>>2) & 1)<<endl;
    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <= 10; j++)
    //         cin>>f[i][j];
    // for (int i = 1; i <= n; i++)
    //     for (int j = 0; j <= 10; j++)
    //         cin>>p[i][j];
    // res = -(1<<30);
    // for (int k = 1; k <= 1024; k++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 0; j < 10)
    //     }
    // }
    return 0;
}