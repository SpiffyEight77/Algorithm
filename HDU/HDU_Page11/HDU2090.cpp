#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
char name[100];
double p,sum,n;
int main()
{
	sum = 0;
	while(scanf("%s %lf %lf",name,&n,&p)!=EOF)
	{
		sum += p * n;
	}
	printf("%.1lf\n",sum);
	return 0;
}
