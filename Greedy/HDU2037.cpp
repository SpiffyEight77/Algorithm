#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct tt
{
	int x,y;
}t[55];
bool cmp(tt X,tt Y)
{
	return X.y < Y.y;
}
int n,i,j,sum;
int main()
{
	while(scanf("%d",&n)!=EOF && n)
	{
		for(i = 0; i < n; i++)
			scanf("%d%d",&t[i].x,&t[i].y);
		sort(t,t+n,cmp);
		j = t[0].y; sum = 1;
		for(i = 1; i < n; i++)
			if(t[i].x >= j)
			{
				sum++;
				j = t[i].y;
			}
		cout<<sum<<endl;
	}
	return 0;
}

