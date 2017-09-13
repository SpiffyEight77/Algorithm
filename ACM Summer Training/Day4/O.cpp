#include<iostream>
#include<cstring>
#define M 100
using namespace std;
int n,c,curr,a[M],b[M],p[M],vis[M];
void dfs(int curr,int num)
{
    if(num > n && !p[a[1] + a[n]])
    {
        printf("%d",a[1]);
        for (int i = 2; i <= n; i++)
            printf(" %d",a[i]);
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        if(!vis[i] && !p[i+curr])
        {
            vis[i] = 1;
            a[num++] = i;
            dfs(i,num);
            num--;
            vis[i] = 0;
        }
    }
    return ;
}
int main()
{
    memset(p,0,sizeof(p));
    p[1] = 1;
    for (int i = 2; i <= M; i++)
        if(!p[i])
            for (int j = i * i; j <= M; j+=i)
                p[j] = 1;
    c = 0;
    while(scanf("%d",&n)!=EOF)
    {
        printf("Case %d:\n",++c);
        memset(a,0,sizeof(a));
        a[1] = 1;
        dfs(1,2);
        printf("\n");
    }
    return 0;
}
