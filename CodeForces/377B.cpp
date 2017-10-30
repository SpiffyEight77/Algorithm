#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 1010
using namespace std;

int n,k,j,i,sum1,sum2;
int w[maxn];

int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        sum1 = 0;
        sum2 = 0;
        for(int i = 0 ;i < n; i++)
        {
            scanf("%d",&w[i]);
            sum1+=w[i];
        }
        for(i = 0; i < n; i++)
        {
            if(i + 1 > n)
                break;
            if(w[i] + w[i+1] < k)
                w[i+1] = k - w[i];
        }
        for(i = 0; i < n; i++)
            sum2+=w[i];
        printf("%d\n%d",sum2-sum1,w[0]);
        for(i = 1; i < n; i++)
            printf(" %d",w[i]);
        printf("\n");
    }
    return 0;
}