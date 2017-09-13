#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 1010
using namespace std;
int map[N][N],dp[N][N];
int main()
{
    int n,m,i,j,maxx;
    cin>>n>>m;
    maxx=0;
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      cin>>map[i][j];
    for(i=1;i<n;i++)
     {
         for(j=1;j<n;j++)
          if(map[i][j]==1 && map[i][j-1]==1 && map[i-1][j]==1 && map[i-1][j-1]==1)
          {
               dp[i][j]=min(min(dp[i][j-1],dp[i-1][j-1]),dp[i-1][j])+1;
               if(dp[i][j]>maxx)
                 maxx=dp[i][j];
          }
     }
     cout<<maxx+1<<endl;
    return 0;
}