#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1100
using namespace std;
int n,ans,dp[M],a[M];
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        memset(dp,0,sizeof(dp));
        ans = 0;
        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        for (int i = 2; i <= n; i++)
            for (int j = 1; j < i; j++)
                if(a[j] >= a[i])
                    dp[i] = max(dp[i],dp[j]+1);
        for (int i = 1; i <= n; i++)
            ans = max(ans,dp[i]+1);
            //printf("%d\n",dp[i]+1);
        printf("%d\n",ans);
    }
    return 0;
}