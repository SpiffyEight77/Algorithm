#include<iostream>
#include<cstring>
#include<algorithm>
#define M 2110
using namespace std;
int T,n,V,size,p[M],h[M],c[M],dp[M],v[M],w[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&V,&n);
        size = 1;
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d%d",&p[i],&h[i],&c[i]);
            for (int j = 1; j <= c[i]; j <<= 1)
            {
                v[size] = j * p[i];
                w[size++] = j * h[i];
                c[i] -= j;
            }
            if(c[i] > 0)
            {
                v[size] = c[i] * p[i];
                w[size++] = c[i] * h[i];
            }
        }
        for (int i = 1; i < size; i++)
            for (int j = V; j >= v[i]; j--)
                dp[j] = max(dp[j],dp[j-v[i]]+w[i]);
        printf("%d\n",dp[V]);
    }
    return 0;
}