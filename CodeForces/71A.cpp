#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,i,l;
char s[110];
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		l = strlen(s);
		if(l>10)
			printf("%c%d%c\n",s[0],l-2,s[l-1]);
		else
			printf("%s\n",s);
	}
	return 0;
}
