#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#define len 1100000
using namespace std;
long long a[len];
int n,i;
int main()
{
	while(scanf("%d",&n)!=EOF && n)
	{
		for(int i = 0; i < n; i++)
			scanf("%lld",&a[i]);
		
		sort(a,a+n);

		for(i = 1; i < n; i++)
			if(a[i] != a[i-1] && a[i] != a[i+1])
				break;
		printf("%lld\n",a[i]);
	}
	return 0;
}
