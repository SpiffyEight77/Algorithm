#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1010
using namespace std;
int V,n,dp[M][M],w[M],v[M];
int dfs(int i,int vv)
{
    if(dp[i][vv]) return dp[i][vv];
    if(i == 0 || vv <= 0) return 0;
    if(v[i] > vv) dp[i][vv] = dfs(i-1,vv);
    else dp[i][vv] = max(dfs(i-1,vv-v[i])+w[i],dfs(i-1,vv));
    return dp[i][vv];
}
int main()
{
    while(scanf("%d%d",&V,&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
            scanf("%d%d",&v[i],&w[i]);
        dfs(n,V);
        printf("%d\n",dp[n][V]);
    }
    return 0;
}
