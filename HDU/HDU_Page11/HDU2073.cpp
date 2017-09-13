#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n,i,k1,k2;
double x,y,x2,y2,sum,sum1,sum2;

double len(int k)
{
	double sum = 0;
	for(i = 1; i<=k; i++)
		sum+=sqrt(i*i+(i-1)*(i-1));
	return sum;
}

double dis(int k)
{
	double sum = 0;
	for(i = 1; i <= k; i++)
		sum+=i*sqrt(2.0);
	return sum;
}

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		sum1 = 0; sum2 = 0;
		scanf("%lf%lf%lf%lf",&x,&y,&x2,&y2);
		
		k1 = x + y;
        k2 = x2 + y2;

        sum1 = len(k1);
		sum2 = len(k2);
		
		sum = dis(k1) - y * sqrt(2.0);
		sum1+=sum;

		sum = dis(k2) - y2 * sqrt(2.0);
		sum2 += sum;
	
		printf("%.3lf\n",abs(sum1-sum2));
	}
	return 0;
}
