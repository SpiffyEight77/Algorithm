#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int n,m,ans,a[110];
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for (int i = 0; i < m; i++)
            if(a[i] < 0)
                ans+=abs(a[i]);
        printf("%d\n",ans);
    }
    return 0;
}