#include<iostream>
#include<cstring>
#include<algorithm>
#define M 100
using namespace std;
int n,l,ans,a[M];
int main()
{
    while(scanf("%d%d",&n,&l)!=EOF)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for (int i = n-l; i < n; i++)
            ans+=a[i];
        printf("%d\n",ans);
    }
    return 0;
}