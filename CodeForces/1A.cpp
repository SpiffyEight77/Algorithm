#include<cstdio>
#include<iostream>
using namespace std;
long long n,m,a;
int main()
{
	while(scanf("%lld%lld%lld",&n,&m,&a)!=EOF)
	{
		printf("%lld\n",(n/a+ (n%a == 0 ? 0:1)) * (m/a + (m%a == 0 ? 0:1)));
	}
	return 0;
}
