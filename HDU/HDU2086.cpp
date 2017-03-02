#include<cstdio>
#include<iostream>
#include<cstring>
#define len 3005
using namespace std;
int n,i;
double a,an1,c[len],sum;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
	scanf("%lf%lf",&a,&an1);
	sum = n * a + an1;
	for(i = 1; i <= n; i++)
		scanf("%lf",&c[i]);
	for(i = 1; i <= n; i++)
		sum-= 2 * (n-i+1) * c[i];
	sum/=(n+1);
	printf("%.2lf\n",sum);
	}
	return 0;
}
