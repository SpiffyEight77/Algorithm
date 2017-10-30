#include<cstdio>
#include<iostream>
#include<cstring>
#define len 101
using namespace std;
char s[len];
int l,i;
bool f;
int main()
{
	while(scanf("%s",s)!=EOF)
	{
		l = strlen(s);
		f = false;
		for(i = 0; i < l; i++)
			if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
				f = true;
		if(f)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
