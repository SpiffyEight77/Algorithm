#include<cstdio>
#include<iostream>
#include<cstring>
#define len 110
using namespace std;
char s[len];
int n,l,c;
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		l = strlen(s);
		c = 0;
		if(l  > 10)
		{
			printf("%c",s[0]);
			for(int i = 1; i < l-1; i++)
				c++;
			printf("%d%c",c,s[l-1]);
		}
		else
			printf("%s",s);
		printf("\n");
	}
	return 0;
}
