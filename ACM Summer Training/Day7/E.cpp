#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1000100
#define N 1100
using namespace std;
int V,n,size,dp[M],c[N],p[N],v[N],w[N];
int main()
{
    while(scanf("%d%d",&V,&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        size = 1;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d",&c[i],&p[i]);
            for (int j = 1; j <= c[i]; j <<= 1)
            {
                v[size] = j * p[i];
                w[size++] = j * p[i];
                c[i] -= j; 
            }
            if(c[i] > 0)
            {
                v[size] = c[i] * p[i];
                w[size++] = c[i] * p[i];
            }
        }
        for (int i = 1; i < size; i++)
            for (int j = V; j >= v[i]; j--)
                dp[j] = max(dp[j],dp[j-v[i]]+w[i]);
        printf("%d\n",dp[V]);
    }
    return 0;
}