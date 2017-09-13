#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#define M 200010
#define inf 2000000010
using namespace std;
int n,a[M];
long long ans,t,sum;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        sum = 0; ans = inf; t = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
       for (int i = 0; i < n-1; i++)
       {
            t += a[i];
            if(ans > abs(2 * t - sum))
                ans = abs(2 * t - sum);
       }
        printf("%lld\n",ans);
    }
    return 0;
}