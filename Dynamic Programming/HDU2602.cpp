#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int T,n,sum,i,j,V,dp[1100],v[1100],m[1100];
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		sum = 0;
		memset(dp,0,sizeof(dp));
		scanf("%d%d",&n,&V);
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&v[i]);
			sum+=v[i];
		}
		for(i = 1; i <= n; i++)
			scanf("%d",&m[i]);
		for(i = 1; i <= n; i++)
			for(j = V; j >= m[i]; j--)
				dp[j] = max(dp[j],dp[j-m[i]]+v[i]);
		printf("%d\n",dp[V]);
	}
	return 0;
}
