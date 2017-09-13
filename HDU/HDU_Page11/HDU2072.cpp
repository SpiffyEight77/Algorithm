#include<cstdio>
#include<iostream>
#include<cstring>
#define len 10010
using namespace std;
char s[len];
int c;
int main()
{
	while(gets(s))
	{
		if(s[0] == '#')
			break;
		c = 0;
		for(int i = 0; i < strlen(s); i++)
			if(s[i] == ' ' || s[i] == '\n')
				c++;
		cout<<c+1<<endl;
	}
	return 0;
}
