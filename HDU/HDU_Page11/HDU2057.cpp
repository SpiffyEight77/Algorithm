#include<cstdio>
#include<iostream>
long long a,b;
int main()
{
	while(scanf("%llX%llX",&a,&b)!=EOF)
	{
		a += b;
		if(a < 0)
			printf("-%llX\n",-a);
		else
			printf("%llX\n",a);
	}
	return 0;
}
