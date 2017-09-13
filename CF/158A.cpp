#include<cstdio>
#include<iostream>
using namespace std;
int n,k,c,a[111];
int main()
{
	while(scanf("%d%d",&n,&k)!=EOF)
	{
		c = 0;
		for(int i = 1; i <= n; i++)
			cin>>a[i];
		for(int i = 1; i <= n; i++)
			if(a[i] >= a[k] && a[i] != 0)
				c++;
		cout<<c<<endl;
	}
	return 0;
}
