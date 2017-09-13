#include<cstdio>
#include<iostream>
#include<cmath>
#define len 550
using namespace std;
int T,n,i,j,sum,t,p[len];
int main()
{
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		sum = 9999999;
		for(i = 1; i <= n; i++)
			scanf("%d",&p[i]);
		for(i = 1; i <= n; i++)
		{
			t = 0;
			for(j = 1; j <= n; j++)
				t += abs( p[i] - p[j] );
			if(t < sum)
				sum = t;
		}
		printf("%d\n",sum);
	}
	return 0;
}
