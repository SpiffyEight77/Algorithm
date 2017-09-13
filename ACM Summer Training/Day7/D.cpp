#include<iostream>
#include<cstring>
#include<algorithm>
#define M 100100
using namespace std;
int n,ans,V,v[M],w[M],dp[M];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {   
        memset(dp,0,sizeof(dp));
        ans = 0;
        for (int i = 1; i <= n; i++)
            scanf("%d%d",&v[i],&w[i]);
        scanf("%d",&V);
        for (int i = 1; i <= n; i++)
            for (int j = w[i]; j <= V; j++)
                dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
        printf("%d\n",dp[V]);
    }
    return 0;
}