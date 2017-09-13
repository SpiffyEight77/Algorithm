#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,d,ans,cnt,sum,s[110];
int main()
{
    while(scanf("%d%d",&n,&d)!=EOF)
    {
        sum = 0;
        cnt = 0;
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&s[i]);
            sum+=s[i] + 10;
            ans+=s[i];
        }
        sum-=10;
        if(sum > d)
        {
            printf("-1\n");
            continue;
        }
        if(d-sum >= 5)
            sum+=(d-sum);
        printf("%d\n",(sum-ans)/5);
    }
    return 0;
}