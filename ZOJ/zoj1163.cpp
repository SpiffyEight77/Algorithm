#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,i,j;
long long dp[505];
int main()
{
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(i = 1; i <= 500; i++)
		for(j = 500; j >= i; j--)
			dp[j] += dp[j-i];
	while(scanf("%d",&n)!=EOF && n)
	{
		printf("%lld\n",dp[n]-1);
	}
	return 0;
}
