#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
using namespace std;
const int M = 210;
const int inf = 0xffffff;
struct node
{
    int x,y,step;
};
int n,m,f,ans,step[M][M][2],dir[4][2]={1,0,0,1,-1,0,0,-1};
char map[M][M];
bool vis[M][M];
void bfs(int x,int y)
{
    node curr,next;
    curr.x = x;
    curr.y = y;
    curr.step = 0;
    queue<node> Q;
    Q.push(curr);
    while(!Q.empty())
    {
        curr = Q.front();
        Q.pop();
        next.step = curr.step + 1;
        for (int i = 0; i < 4; i++)
        {
            next.x = curr.x + dir[i][0];
            next.y = curr.y + dir[i][1];
            if(next.x >= 0 && next.x < n && next.y >= 0 && next.y < m && !vis[next.x][next.y] && map[next.x][next.y] != '#')
            {
                vis[next.x][next.y] = 1;
                step[next.x][next.y][f] = next.step;
                Q.push(next);
            }
        }
    }
    return ;
}
int main()
{
    while(cin>>n>>m)
    {
        getchar();
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                step[i][j][0] = step[i][j][1] = inf;
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(map[i][j] == 'Y')
                {
                    memset(vis,0,sizeof(vis));
                    f = 0;
                    vis[i][j] = 1;
                    bfs(i,j);
                }
                else
                    if(map[i][j] == 'M')
                    {
                        memset(vis,0,sizeof(vis));
                        f = 1;
                        vis[i][j] = 1;
                        bfs(i,j);
                    }
        ans = inf;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(map[i][j] == '@')
                    ans = min(ans,step[i][j][0] + step[i][j][1]);
        printf("%d\n",ans*11);
    }
    return 0;
}