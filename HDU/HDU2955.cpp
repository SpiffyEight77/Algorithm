#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int T,i,j,n,m[110];
double p[110],dp[11000],P,sum;
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		memset(dp,0,sizeof(dp));
		sum = 0;
		scanf("%lf%d",&P,&n);
		P = 1 - P;
		for(i = 0; i < n; i++)
		{ 
			scanf("%d%lf",&m[i],&p[i]);
			p[i] = 1 - p[i];
			sum += m[i];
		}
		dp[0] = 1;
		for(i = 0; i < n; i++)
			for(j = sum; j >= m[i]; j--)
				dp[j] = max(dp[j],dp[j - m[i]] * p[i]);
		for(i = sum; i >= 0; i--)
			if(dp[i] >= P)
			{
				printf("%d\n",i);
				break;
			}
	}
	return 0;
}
