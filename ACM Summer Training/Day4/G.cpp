#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define M 10
using namespace std;
char map[M][M];
bool f,vis[M][M];
int n,m,t,cnt,maxt,sx,sy,ex,ey,dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
void dfs(int x,int y,int cnt)
{
    if(f)
        return ;
    if(x == ex && y == ey && cnt == t)
    {
        f = true; 
        return ;
    }
    int tmp = t - cnt - abs(x-ex) - abs(y-ey);
    if(tmp < 0 || tmp & 1)
        return ;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(!vis[xx][yy] && xx >= 0 && xx < n && yy >= 0 && yy < m && map[xx][yy] != 'X')
        {
            vis[xx][yy] = true;
            dfs(xx,yy,cnt+1);
            if(f)
                return ;
            vis[xx][yy] = false;
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d%d",&n,&m,&t)!=EOF)
    {
        if(n == 0 && m == 0 && t == 0)
            break;
        memset(vis,0,sizeof(vis));
        maxt = 999999; f = false;
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if(map[i][j] == 'S')
                    sx = i,sy = j;
                else
                    if(map[i][j] == 'D')
                    {
                        ex = i, ey = j;
                        break;
                    }
        vis[sx][sy] = true;
        dfs(sx,sy,0);
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
        //printf("%d\n",maxt);
    }
    return 0;
}