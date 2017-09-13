#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#define M 210
#define inf 0xffffff
using namespace std;
struct node
{
    int x,y,step;
};
int n,m,f,minstep,dis[M][M][2],dir[4][2] = {1,0,0,1,-1,0,0,-1};
char map[M][M];
bool vis[M][M];
void bfs(int x,int y)
{
    queue<node> q;
    node curr,next;
    curr.x = x; curr.y = y; curr.step = 0;
    vis[x][y] = true;
    q.push(curr);
    while(!q.empty())
    {
        curr = q.front();
        q.pop();
        next.step = curr.step + 1;
        for (int i = 0; i < 4; i++)
        {
            next.x = x = curr.x + dir[i][0];
            next.y = y = curr.y + dir[i][1];
            if(!vis[x][y] && map[x][y] != '#' && x >= 0 && x < n && y >= 0 && y < m)
            {
                vis[x][y] = true;
                if(map[x][y] == '@')
                    dis[x][y][f] = next.step;
                q.push(next);
            }
        }
    }
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        //memset(dis,0,sizeof(dis));
        minstep = inf;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                dis[i][j][0] = dis[i][j][1] = inf;
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(map[i][j] == 'Y')
                {
                    memset(vis,0,sizeof(vis));
                    f = 0;
                    bfs(i,j);
                }
                else if(map[i][j] == 'M')
                {
                    memset(vis,0,sizeof(vis));
                    f = 1;
                    bfs(i,j);
                }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(map[i][j] == '@')
                    minstep = min(minstep,dis[i][j][0] + dis[i][j][1]);
        printf("%d\n",minstep*11);
    }
    return 0;
}