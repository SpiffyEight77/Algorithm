#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int n,x;
double k,maxn;
int main()
{
	cin>>n;
	while(n--)
	{
		maxn = 0;
		cin>>x;
		for(int i = 0; i < x; i++)
		{
			cin>>k;
			if(k >= maxn)
				maxn = k;
		}
		printf("%.2lf\n",maxn);
	}
	return 0;
}
