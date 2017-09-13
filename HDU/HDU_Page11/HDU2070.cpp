#include<cstdio>
#include<iostream>
#define len 110
using namespace std;
int n;
long long num[len];
int main()
{
	num[0] = 0; num[1] = 1; num[2] = 1;
	for(int i = 3; i <= 51; i++)
		num[i] = num[i-1] + num[i-2];
	while(cin>>n)
	{
		if(n == -1)
			break;
		cout<<num[n]<<endl;
	}
	return 0;
}
