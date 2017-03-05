#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[105][105],i,j,n,T;
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i = 1; i <= n; i++)
			for(j = 1; j <= i; j++)
				scanf("%d",&dp[i][j]);
		for(i = n-1; i >= 1; i--)
			for(j = 1; j <= i; j++)
				dp[i][j] += max(dp[i+1][j],dp[i+1][j+1]);
		cout<<dp[1][1]<<endl;
	}
	return 0;
}
