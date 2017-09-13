#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1100
using namespace std;
int n,m,maxlen,map[M][M],dp[M][M],dir[4][2] = {0,1,0,-1,1,0,-1,0};
int DP(int x,int y)
{
    int len = 0;
    if(dp[x][y]) return dp[x][y];
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dir[i][0];
        int yy = y + dir[i][1];
        if(xx >= 0 && xx < n && yy >= 0 && yy < m && map[xx][yy] < map[x][y])
            len = max(DP(xx,yy),len);
    }
    dp[x][y] = len + 1;
    return dp[x][y];
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        maxlen = 0; 
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d",&map[i][j]);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                maxlen = max(maxlen,DP(i,j));
        printf("%d\n",maxlen);    
    }
    return 0;
}