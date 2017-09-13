#include<iostream>
#include<cstring>
#include<algorithm>
#define M 25
using namespace std;
int T,n,maxlen,ave,a[M];
bool vis[M];
bool cmp(int x,int y)
{
    return x > y;
}
bool dfs(int num,int len,int p)
{
    if(num == 4) return true;
    if(len == ave) return dfs(num+1,0,0);
    for (int i = p; i < n; i++)
    {
        if(!vis[i] && len+a[i] <= ave)
        {
            vis[i] = true;
            if(dfs(num,len+a[i],i+1)) return true;
            vis[i] = false;
        }
    }
    return false;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        memset(vis,0,sizeof(vis));
        maxlen = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            maxlen += a[i];
        }
        if(maxlen%4!=0)
        {
            printf("no\n");
            continue;
        }
        ave = maxlen/4;
        sort(a,a+n,cmp);
        if(dfs(0,0,0))
            printf("yes\n");
        else
            printf("no\n");
    }
}