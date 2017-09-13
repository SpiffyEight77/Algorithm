#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int M = 1001000;
long long sum,maxn,ans,a[M];
int n,m;
bool f;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        f = 0;
        sum = 0; maxn = 0; ans = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
            ans += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            maxn = 0; sum = 0;
            for (int j = i; j < n; j++)
            {
                sum+=a[j];
                if(sum % 2 != 0)
                    maxn = max(maxn,sum);
            }
            if((ans - maxn) == 0 || ( (ans - maxn) != 0 && (ans-maxn) % 2 != 0) )
            {
                f = 1;
                printf("First\n");
                break;
            }
        }
        if(!f)
            printf("Second\n");
    }
    return 0;
}