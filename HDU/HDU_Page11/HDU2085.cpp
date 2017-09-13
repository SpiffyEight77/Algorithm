#include<cstdio>
#include<iostream>
#define len 50
using namespace std;
long long x[len],y[len];
int n;
int main()
{
	x[0] = 1; y[0] = 0; x[1] = 3; y[1] = 1;
	for(int i = 2; i <= 33; i++)
	{
		x[i] = x[i-1] * 3 + y[i-1] * 2;
		y[i] = x[i-1] + y[i-1];
	}
	while(scanf("%d",&n)!=EOF)
	{
		if(n == -1)
			break;
		printf("%lld, %lld\n",x[n],y[n]);
	}
	return 0;
}
