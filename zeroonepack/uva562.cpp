#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int T,n,i,j,sum,dp[50010],c[50010];
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		memset(dp,0,sizeof(dp));
		sum = 0;
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&c[i]);
			sum+=c[i];
		}
		for(i = 1; i <= n; i++)
			for(j = sum/2; j >= c[i]; j--)
				dp[j] = max(dp[j],dp[j-c[i]]+c[i]);
		printf("%d\n",sum-2*dp[sum/2]);
	}
	return 0;
}
