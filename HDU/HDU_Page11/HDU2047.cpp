#include<cstdio>
#include<iostream>
#define len 1000010
using namespace std;
long long a[len];
int n;
int main()
{
	a[1] = 3; 
	a[2] = 8;
	for(int i = 3; i < 40; i++)
		a[i] = (a[i-1] - a[i-2] * 2)*2 + a[i-2] * 6;
	while(scanf("%d",&n)!=EOF)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
