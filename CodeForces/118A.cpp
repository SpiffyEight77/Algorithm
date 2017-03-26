#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int i,l;
char s[105];
int main()
{
	while(scanf("%s",s)!=EOF)
	{
		l = strlen(s);
		for(i = 0; i < l; i++)
			if(s[i] != 'A' && s[i] != 'a' && s[i] != 'O' && s[i] != 'o' && s[i] != 'Y' && s[i] != 'y' && s[i] != 'E' && s[i] != 'e' && s[i] != 'U' && s[i] != 'u' && s[i] != 'I' && s[i] != 'i')
				if(s[i] >= 'A' && s[i] <='Z')
					printf(".%c",s[i] - 'A' + 'a');
				else
					printf(".%c",s[i]);
		printf("\n");
	}
	return 0;
}
