#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int T,n,i,j,sum,mw,w[1010],p[1010],dp[1010];
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		memset(dp,0,sizeof(dp));
		sum = 0;
		scanf("%d",&n);
		for(i = 1; i <= n; i++)
			scanf("%d%d",&p[i],&w[i]);
		for(i = 1; i <= n; i++)
			for(j = 30; j >= w[i]; j--)
				dp[j] = max(dp[j],dp[j-w[i]]+p[i]);
		scanf("%d",&n);
		for(i = 1; i <= n; i++)
		{
			scanf("%d",&mw);
			sum+=dp[mw];
		}
		printf("%d\n",sum);
	}
	return 0;
}
