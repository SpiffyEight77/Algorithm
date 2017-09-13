#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1100;
int T,n,l,r,m,ans,a[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        for (int i = 1; i <= m; i++)
        {
            ans = 0;
            scanf("%d%d",&l,&r);
            for (int j = l; j <= r; j++)
                ans = max(ans,a[j]);
            printf("%d\n",ans);
        }
    }
    return 0;
}