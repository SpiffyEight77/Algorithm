#include<cstdio>
#include<iostream>
#define len 1101
using namespace std;
int n,m,i,j,k;
int main()
{
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		for(i = 0; i <= m+1; i++)
		{
			if(i != 0 && i != m+1)
			{
				cout<<"|";
				for(k = 1; k <= n; k++)
					cout<<" ";
				cout<<"|"<<endl;
				continue;
			}
			for(j = 0; j <= n+1; j++)
			{
				if(j == 0)
					cout<<"+";
				else
				if(j == n+1)
					cout<<"+"<<endl;
				else
					cout<<"-";
			}
		}
	cout<<endl;
	}
	return 0;
}
