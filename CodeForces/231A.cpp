#include<cstdio>
#include<iostream>
using namespace std;
int p,v,t,n,sum,c;
int main()
{
	c = 0;
	scanf("%d",&n);
	while(n--)
	{
		sum = 0;
		scanf("%d%d%d",&p,&v,&t);
		sum+= p + v + t;
		if(sum >= 2)
			c++;
	}
	printf("%d\n",c);
	return 0;
}
