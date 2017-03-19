#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct item
{
		int p,v,q;
}s[5010];
bool cmp(item x,item y)
{
	return x.q - x.p < y.q - y.p;
}
int n,m,i,j,dp[5010];
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		memset(dp,0,sizeof(dp));
		for(i = 1; i <= n; i++)
			scanf("%d%d%d",&s[i].p,&s[i].q,&s[i].v);
		sort(s+1,s+n,cmp);
		for(i = 1; i <= n; i++)
			for(j = m; j >= s[i].p; j--)
				if(j >= s[i].q)
				dp[j] = max(dp[j],dp[j-s[i].p]+s[i].v);
		printf("%d\n",dp[m]);
	}
	return 0;
}
