#include<iostream>
#include<cstring>
#include<algorithm>
#define M 110
using namespace std;
int n,T,a[M][M],dp[M][M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++)
            {
                scanf("%d",&a[i][j]);
                dp[i][j] = a[i][j];
            }
        for (int i = n - 1; i >= 1; i--)
            for (int j = 1; j <= i; j++)
                dp[i][j] = max(dp[i][j]+dp[i+1][j],dp[i][j]+dp[i+1][j+1]);
        printf("%d\n",dp[1][1]);
    }
    return 0;
}