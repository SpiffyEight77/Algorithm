#include<iostream>
#include<cstring>
#define M 10
using namespace std;
int n,m,cnt,k;
char map[M][M];
bool vis[M];
void dfs(int dep,int k)
{
    int i;
    if(k == m)
    {
        cnt++;
        return ; 
    }
    for (i = dep; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(!vis[j] && map[i][j] == '#')
            {
                vis[j] = true;
                dfs(i+1,k+1);
                vis[j] = false;
            } 
        }
    }  
    return ;
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n == -1 && m == -1)
            break;
        getchar();
        memset(vis,false,sizeof(vis));
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        cnt = 0;
        dfs(0,0);
        printf("%d\n",cnt);
    }
    return 0;
}