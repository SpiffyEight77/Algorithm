#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1010
using namespace std;
int size,cnt,V,a[M] = {0,1,2,3,5,10,20},c[M],dp[M],v[M],m[M];
int main()
{
    while(scanf("%d%d%d%d%d%d",&c[1],&c[2],&c[3],&c[4],&c[5],&c[6])!=EOF)
    {
        size = 1; V = 0; cnt = 0;
        memset(dp,0,sizeof(dp));
        memset(m,0,sizeof(m));
        for (int i = 1; i <= 6; i++)
        {
            V += a[i] * c[i];
            for (int j = 1; j <= c[i]; j <<= 1)
            {
                v[size++] = j * a[i];
                c[i] -= j;
            }
            if(c[i] > 0)
                v[size++] = c[i] * a[i];
        }
        for (int i = 1; i < size; i++)
            for (int j = V; j >= v[i]; j --)
            {
                dp[j] = max(dp[j],dp[j-v[i]]+v[i]);
                if(!m[dp[j]])
                {
                    m[dp[j]] = 1;
                    cnt++;
                }
            }
        
        // for (int i = V; i >= 0; i--)
        //     if(dp[i])
        //         cnt++;
        printf("Total=%d\n",cnt);
    }
    return 0;
}