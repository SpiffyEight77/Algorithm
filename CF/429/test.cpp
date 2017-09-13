#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int M = 1001000;
long long sum,maxn,ans,a[M],num[M];
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
            if(i == 0)
                num[0] = a[0];
            else
                num[i] = num[i-1] + a[i];
        }
        ans = num[n-1];
        if(num[n-1] % 2 != 0 && ans - num[n-1] == 0)
        {
            printf("First\n");
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if( num[i] % 2 != 0 && (ans - num[i]) % 2 != 0 )
            {
                printf("First\n");
                f = 1;
                break;
            }
        }
        if(!f)
            printf("Second\n");
    }
    return 0;
}