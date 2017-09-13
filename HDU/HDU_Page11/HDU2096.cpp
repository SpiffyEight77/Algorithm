#include<cstdio>
#include<iostream>
using namespace std;
int n,x,y;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		printf("%d\n",(x % 100 + y % 100) % 100);
	}
	return 0;
}
