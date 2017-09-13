#include<iostream>
#include<cstring>
#include<algorithm>
#define M 100
using namespace std;
int n,maxlen,aim,tar,a[M];
bool f,vis[M];
bool cmp(int x, int y)
{
    return x > y;
}
bool dfs(int num,int len,int p)
{
    if(num == tar)
        return true;
    if(len == aim)
        return dfs(num+1,0,0);
    for (int i = p; i < n; i++)
    {
        if(!vis[i] && a[i] + len <= aim)
        {
            vis[i] = true;
            if(dfs(num,len+a[i],i+1)) return true;
            vis[i] = false;
            if(len == 0) return false;
            while(i+1 < n && a[i] == a[i+1])
                i++;
        }
    }
    return false;
}
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        f = false; maxlen = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            maxlen += a[i];
        }
        sort(a,a+n,cmp);
        for (int i = 1; i <= maxlen; i++)
        {
            if(maxlen % i == 0)
            {
                memset(vis,0,sizeof(vis));
                aim = i; tar = maxlen/i;
                if(dfs(0,0,0))
                {
                    printf("%d\n",aim);
                    break;
                }
            }
        }
    }
    return 0;
}