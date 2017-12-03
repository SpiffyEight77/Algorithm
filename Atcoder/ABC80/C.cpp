#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
typedef long long ll;
int f[110][6][3],p[110][12],a[110],ans,res,n;
int main()
{
    cin>>n;
    memset(a,0,sizeof(a));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 10; j++)
        {
            scanf("%d %d",&f[i][j][1],&f[i][j][2]);
            if(a[i] == 1)
                a[i]++;
        }
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= 10; j++)
            scanf("%d",&p[i][j]);
    for (int i = 1; i <= n; i++)
        
    return 0;
}