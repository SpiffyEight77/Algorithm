#include<cstdio>
#include<iostream>
#include<cstring>
#define len 100100
using namespace std;
int num[len],n,i,j,k;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		memset(num,0,sizeof(num));
		for(i = 1; i <= n; i++)
		{
			if(n % i == 0)
			{
				if(num[n] == 1)
					num[n] = 0;
				else
					num[n] = 1;
			}
		}
			cout<<num[n]<<endl;
	}
	return 0;
}
