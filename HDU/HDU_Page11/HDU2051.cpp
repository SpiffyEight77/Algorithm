#include<cstdio>
#include<iostream>
#include<cstring>
#define len 1010
using namespace std;
int s[len];
int n,i,j;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		i = 0;
		memset(s,0,sizeof(s));
		while(n)
		{
			s[i++] = n % 2 ;
			n/=2; 
		}
		for(j = i-1; j >= 0; j--)
			printf("%d",s[j]);
		cout<<endl;
	}
	return 0;
}
