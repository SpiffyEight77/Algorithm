#include<iostream>
#include<cstdio>
#include<algorithm>
#define M 100010
using namespace std;
int T,n,q,s,e,c,low,up,a[M];
int main()
{
    scanf("%d",&T);
    c = 0;
    while(T--)
    {
        scanf("%d%d",&n,&q);
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        printf("Case %d:\n",++c);
        while(q--)
        {
            scanf("%d%d",&s,&e);
            low = lower_bound(a,a+n,s) - a;
            up = upper_bound(a,a+n,e) - a;
            printf("%d\n",up - low);
        }
    }
    return 0;
}