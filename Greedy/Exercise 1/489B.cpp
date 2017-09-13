#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int M = 110;
int n,m,ans,a[M],b[M];
bool vis[M];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        ans = 0;
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        for (int i = 0; i < m; i++)
            scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(!vis[j] && abs(a[i]-b[j]) <= 1)
                {
                    vis[j] = 1;
                    ans++;
                    break;
                }
        printf("%d\n",ans);
    }
    return 0;
}