#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,t,i,j,k,sum,ed;
int s[110],e[110];
int main()
{
	while(scanf("%d",&n)!=EOF && n)
	{
		for(i = 1; i <= n; i++)
			scanf("%d%d",&s[i],&e[i]);
		for(i = 1; i <= n-1; i++)
			for(j = i+1; j <= n; j++)
				if(e[i] > e[j])
				{
					t = e[i];
					e[i] = e[j];
					e[j] = t;
					
					t = s[i];
					s[i] = s[j];
					s[j] = t;
				}
		ed = e[1];
		sum = 1;
			for(j = 2; j <= n; j++)
				if(s[j] >= ed)
				{
					sum++;
					ed = e[j];
				}
		cout<<sum<<endl;
	}
	return 0;
}
