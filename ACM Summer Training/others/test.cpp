#include<iostream>
#include<cstring>
#define M 1010
using namespace std;
int n,V,v[M],w[M],dp[M][M];
int dfs(int i,int vv)
{
    if(dp[i][vv]) 
        return dp[i][vv];
    if(i == n + 1 || vv <= 0) 
        return 0;
    if(v[i] > V)
        dp[i][vv] = dfs(i+1,vv);
    else
        dp[i][vv] = max(dfs(i+1,vv),dfs(i+1,vv-v[i])+w[i]);
    return dp[i][vv];
}
int main()
{
    while(scanf("%d%d",&V,&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
            scanf("%d%d",&v[i],&w[i]);
        printf("%d\n",dfs(0,V));
    }
    return 0;
}