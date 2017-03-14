#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int m,n,i,j,t[25],dp[1010],vis[1010][25];
int main()
{
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		memset(vis,0,sizeof(vis));
		for(i = 1; i <= n; i++)
			scanf("%d",&t[i]);
		for(i = 1; i <= n; i++)
			for(j = m; j >= t[i]; j--)
				if(dp[j] <= dp[j-t[i]] + t[i])
				{
					dp[j] = dp[j-t[i]] + t[i];
					vis[j][i] = 1;
				}
		for(i = n,j = m; i >= 1; i--)
		{
			if(vis[j][i])
			{
				printf("%d ",t[i]);
				j-=t[i];
			}
		}
		printf("sum:%d\n",dp[m]);
	}
	return 0;
}
