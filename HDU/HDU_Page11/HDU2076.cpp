#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int n;
double h,m,s,sum,sum2,sum3;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		sum = 0; sum2 = 0; sum3 = 0;
		scanf("%lf%lf%lf",&h,&m,&s);
		
		if(h > 12)
			h -= 12;

		sum += s/60.0*6+m*6;
		sum2 += s/3600*30+m/60.0*30+h*30;
		sum3 = abs(sum-sum2);

		if(sum3 > 180)
			sum3 = 360 - sum3;
		printf("%d\n",(int)sum3);
	}
	return 0;
}
