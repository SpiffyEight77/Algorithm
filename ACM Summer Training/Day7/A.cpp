#include<iostream>
#include<cstring>
#include<algorithm>
#define M 2010
using namespace std;
int T,n,m,dp[M],p[M],h[M],c[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= m; i++)
            scanf("%d%d%d",&p[i],&h[i],&c[i]);
        
        for (int k = 1; k <= m; k++)
            for (int i = 1; i <= c[k]; i++)
                for (int j = n; j >= p[k]; j--)
                    dp[j] = max(dp[j],dp[j-p[k]]+h[k]);
        printf("%d\n",dp[n]);
    }
    return 0;
}