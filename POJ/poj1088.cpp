#include<cstdio>
#include<iostream>
#include<cstring>
#define N 105
using namespace std;
int map[N][N],dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}},len[N][N],maxx,step,r,c,i,j;
int dp(int x,int y)
{
   int k,xx,yy,mx=0;
   if(len[x][y])
    return len[x][y];
   for(k=0;k<4;k++)
   {
       xx=x+dir[k][0];
       yy=y+dir[k][1];
       if(xx>=0 && xx<r && yy>=0 && yy<c && map[xx][yy]<map[x][y])
       {
           step=dp(xx,yy);
           if(step>mx)
            mx=step;
       }
   }
   return mx+1;
}
int main()
{
    cin>>r>>c;
    maxx=0;
    memset(len,0,sizeof(len));
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      cin>>map[i][j];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      {
          len[i][j]=dp(i,j);
           if(len[i][j]>maxx)
            maxx=len[i][j];
      }
      cout<<maxx<<endl;
    return 0;
}