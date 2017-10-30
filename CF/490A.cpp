#include<iostream>
#include<cstring>
#include<algorithm>
#define Max 10010
using namespace std;
int a[Max],b[Max],c[Max],w,n,x,y,z,k;
int main()
{
	while(~scanf("%d",&n))
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		x = 0,y = 0,z = 0;
		for(int i = 1; i <= n; i++)
		{	
			scanf("%d",&k);
			if(k == 1)
				a[++x] = i;
			if(k == 2)
				b[++y] = i;
			if(k == 3)
				c[++z] = i;
		}
		//printf("%d %d %d\n",x,y,z);
		w = min(x,min(y,z));
		printf("%d\n",w);
		if(!w)
			continue;
		for(int i = 1; i <= w; i++)
			printf("%d %d %d\n",a[i],b[i],c[i]);
	}
	return 0;
}
