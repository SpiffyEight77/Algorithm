#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n,m,i,j,w[5050],v[5050],dp[100010];
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		for(i = 1; i <= n; i++)
			scanf("%d%d",&w[i],&v[i]);
		for(i = 1; i <= n; i++)
			for(j = m; j >= w[i]; j--)
				dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
		printf("%d\n",dp[m]);
	}
	return 0;
}
