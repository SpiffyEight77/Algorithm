#include<iostream>
#include<cstring>
#include<algorithm>
#define M 10100
using namespace std;
int T,n,v[M],V;
double P,p[M],dp[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%lf%d",&P,&n);
        V = 0;
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%lf",&v[i],&p[i]);
            p[i] = 1.0 - p[i];
            V+=v[i];
        }
        for (int i = 1; i <= n; i++)
            for (int j = V; j >= v[i]; j--)
                dp[j] = max(dp[j],dp[j-v[i]]*p[i]);
        for (int j = V; j >= 0; j--)
            if(dp[j] >= (1 - P))
            {
                printf("%d\n",j);
                break;
            } 
    }
    return 0;
}