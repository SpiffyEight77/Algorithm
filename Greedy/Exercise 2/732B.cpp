#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 550;
int n,k,ans,res,a[M];
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        ans = 0; res = 0;
        for (int i = 1; i < n; i++)
            if(a[i] + a[i-1] < k)
            {
                ans += k - a[i-1] - a[i];
                a[i] += k - a[i-1] - a[i];
            }
        printf("%d\n%d",ans,a[0]);
        for (int i = 1; i < n; i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}