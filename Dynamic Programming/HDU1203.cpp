#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 10005
using namespace std;
int V,n,i,j,a[maxn];
double b[maxn],dp[maxn];
int main()
{
	while(scanf("%d%d",&V,&n)!=EOF)
	{
		if(V == 0 && n == 0)
			break;
		for(i = 1; i <= n; i++)
		{
			scanf("%d%lf",&a[i],&b[i]);
			b[i] = 1 - b[i];
		}
		for(i = 0; i <= V; i++)
			dp[i] = 1.0;
		for(i = 1; i <= n; i++)
			for(j = V; j >= a[i]; j--)
				dp[j] = min(dp[j],dp[j-a[i]]*b[i]);
		printf("%.1lf%%\n",(1-dp[V])*100);
	}
	return 0;
}
