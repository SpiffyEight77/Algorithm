#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 300010;
int n,p,a[M];
long long sum,ans;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        sort(a,a+n);
        ans = sum;
        p = 0;
        while(p!=n-1)
        {
            ans += sum;
            sum -= a[p++];
        }
        printf("%lld\n",ans);
    }
    return 0;
}