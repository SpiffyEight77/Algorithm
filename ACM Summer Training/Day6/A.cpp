#include<iostream>
#define M 25
using namespace std;
char map[M][M];
int n,m,cnt,dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
void bfs(int x,int y)
{
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(map[xx][yy] == '.' && xx >= 0 && xx < n && yy >= 0 && yy < m)
        {
            map[xx][yy] = '#';
            bfs(xx,yy);
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        getchar();
        if(n == 0 && m == 0)
            break;
        cnt = 0;
        for (int i = 0; i < n; i++)
            scanf("%s",map[i]);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if(map[i][j] == '@')
                {
                    bfs(i,j);
                    break;
                }
        }
        printf("%d\n",cnt); 
    }
    return 0;
}