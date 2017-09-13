#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,m,i,j,sum;
double Q,x,dp[10010],v[1010];
char c;
int main()
{
	while(scanf("%lf,%d",&Q,&n)!=EOF && n)
	{
		sum = 0;
		memset(dp,0,sizoef(dp));
		for(i = 0; i < n; i++)
		{
			scanf("%d",&m);
			for(j = 0; j < m; j++)
			{	
				scanf("%c:%lf",&c,&x);
				sum += x;
				v[i] += x;
			}
		}
		for(i = 0; i < n; i++)
			for(j = sum; j >= v[i]; j--) 
				dp[j] = max(dp[j], dp[j-v[i]]+v[i]);
	}
	return 0;
}
