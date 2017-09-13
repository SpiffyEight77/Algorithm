#include<iostream>
#include<cstring>
#define M 20
using namespace std;
int n,cnt,a[M];
bool vis[M],l[M],r[M];
void dfs(int dep)
{
    if(dep > n)
    {
        cnt++;
        return ;
    }
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i] && !l[i+dep] && !r[i-dep+n])
        {
            vis[i] = true; l[i+dep] = true; r[i-dep+n] = true;
            a[dep] = i;
            dfs(dep+1);
            vis[i] = false; l[i+dep] = false; r[i-dep+n] = false;
        }
    }
}
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        cnt = 0;
        n = i;
        dfs(1);
        a[i] = cnt;
    }
    while(scanf("%d",&n)!=EOF && n)
    {
        memset(vis,false,sizeof(vis));
        // memset(a,0,sizeof(a));
        // cnt = 0;
        // dfs(1);
        printf("%d\n",cnt);
    }
    return 0;
}