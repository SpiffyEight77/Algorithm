#include<cstdio>
#include<iostream>
#define len 111
using namespace std;
long long a[len][len],k;
int i,j,p,n,m,T;
int main()
{
	for(i = 1; i <= 21; i++)
	{
		k = 1;
		for(j = 1; j <= i; j++)
			k*=j;
		for(p = 1; p <= i; p++)
			a[i][p] = k / p;
	}
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&n,&m);
		cout<<a[n][m]<<endl;
	}
	return 0;
}
