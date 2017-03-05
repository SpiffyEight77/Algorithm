#include<cstdio>
#include<iostream>
using namespace std;
int w;
int main()
{
	while(scanf("%d",&w)!=EOF)
	{
		if(w != 2 && w % 2==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
