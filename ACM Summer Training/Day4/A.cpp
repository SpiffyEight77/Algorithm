#include<iostream>
#include<cstring>
#define M 110
using namespace std;
char map[M][M];
bool vis[M][M];
int n,m,cnt,dir[8][2] = { {0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,-1},{1,-1},{-1,1} };
void dfs(int x,int y)
{
    for (int i = 0; i < 8; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];

        if(!vis[xx][yy] && map[xx][yy] == '@' && xx < n && yy < m && xx >= 0 && yy >= 0)
        {
            vis[xx][yy] = true;
            dfs(xx,yy);
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        getchar();
        if(n ==0 && m == 0)
            break;
        memset(vis,0,sizeof(vis));
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        cnt = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(map[i][j] == '@' && !vis[i][j])
                {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}