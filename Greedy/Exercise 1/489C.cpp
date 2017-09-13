#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 110;
int n,s,cnt,sum,ans[M],maxn[M],minn[M];
int main()
{
    while(scanf("%d%d",&n,&sum)!=EOF)
    {
        if(n * 9 < sum || (n > 1 && sum == 0)) 
        {
            printf("-1 -1\n");
            continue;
        }
        if(n == 1 && sum == 0)
        {
            printf("0 0\n");
            continue;
        }

        s = sum;
        cnt = 0;
        for (int i = n; i >= 1; i--)
        {
            for (int j = 9; j >= 0; j--)
            {
                if(s >= j)
                {
                    s -= j;
                    maxn[cnt++]=j;
                    break;
                }
            }
        }
        
        minn[0] = 1;
        s = sum-1;
        cnt = n-1;
        for (int i = 1; i < n; i++)
        {
            for (int j = 9; j >= 0; j--)
            {
                if(s >= j)
                {
                    s-=j;
                    minn[cnt--] = j;
                    break;
                }
            }
        }
        
        if(s)
            minn[0] += s;

        for (int i = 0; i < n; i++)
            printf("%d",minn[i]);
        printf(" ");
        for (int i = 0; i < n; i++)
            printf("%d",maxn[i]);
        printf("\n");
            
    }
    return 0;
}