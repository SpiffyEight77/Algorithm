#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 105
using namespace std;

char map[maxn][maxn],c;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int n,m,i,j,num;
int vis[maxn][maxn],vised[maxn];

void dfs(int x,int y)
{
    for(int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];

        if(xx>=0 && yy>=0 && xx<n && yy<m && map[xx][yy] >= 'A' && map[xx][yy] <= 'Z' && vis[xx][yy] == 0)
        {
            vis[xx][yy] = 1;
            if(map[xx][yy] == c)
                dfs(xx,yy);
            else
            if(vised[map[xx][yy] - 'A'] == 0)
            {
                vised[map[xx][yy] - 'A'] = 1;
                num++;
            }
        }
    }
}

int main()
{
    while(scanf("%d %d %c",&n,&m,&c)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        memset(vised,0,sizeof(vised));
        num = 0;

        getchar();
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
                scanf("%c",&map[i][j]);
            getchar();
        }

        for(i = 0; i < n; i++)
            for(j = 0; j < m; j++)
            if(map[i][j] == c)
            {
                dfs(i,j);
                break;
            }
        printf("%d\n",num);
    }
    return 0;
}