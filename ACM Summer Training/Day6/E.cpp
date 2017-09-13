#include<iostream>
#include<cstring>
using namespace std;
int maxlen,map[6][6],u[6][6],q[50],dir[4][2] = {{0,1},{1,0},{-1,0},{0,-1}};
bool f,vis[6][6];
void bfs(int x,int y,int step)
{
    if(f) return ;
    if(x == 4 && y == 4)
    {
        // printf("step = %d\n",step);
        // for (int i = 0; i < step; i++)
        //     printf("%d ",q[i]);
        // cout<<endl;
        for (int i = 0; i < step; i++)
            printf("(%d, %d)\n",(q[i] - 1)/5,(q[i] - 1)%5);
        //maxlen = min(maxlen,step);
        f = true;
        return ;
    }
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(!vis[xx][yy] && map[xx][yy] == 0 && xx >= 0 && xx < 5 && yy >= 0 && yy < 5)
        {
            vis[xx][yy] = true;
            q[step] = u[xx][yy];
            bfs(xx,yy,step+1);
            if(f) return ;
            vis[xx][yy] = false;
        }
    }
    return ;
}
int main()
{
    memset(q,0,sizeof(q));
    memset(vis,0,sizeof(vis));
    f = false;
    maxlen = 99;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            u[i][j] = i * 5 + j + 1;

    // for (int i = 0; i < 5; i++)
    //     for (int j = 0; j < 5; j++)
    //         printf("%d ",u[i][j]);
    // printf("\n");

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d",&map[i][j]);
    q[0] = u[0][0];
    bfs(0,0,1);
    // for (int i = 0; i < maxlen; i++)
    //         printf("(%d, %d)\n",(q[i] - 1)/5,(q[i] - 1)%5);
    return 0;
}