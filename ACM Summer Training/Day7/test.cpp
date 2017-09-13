#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1010
using namespace std;
int T,V,n,ans,dp[M],w[M],v[M],c[M];
void dfs(int p,int weight,int sum)
{
    ans = max(sum,ans);
    if(V == weight)
    {
        //printf("weight = %d ans = %d\n",weight,ans);
        sum = 0;
        return ;
    }
    for (int i = p; i <= n; i++)
        if(weight + w[i] <= V)
            dfs(i+1,weight+w[i],sum+v[i]);
    return ;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&V,&n);
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
            scanf("%d%d",&w[i],&v[i]);
        ans = 0;
        dfs(1,0,0);
        printf("%d\n",ans);
    }
    return 0;
}