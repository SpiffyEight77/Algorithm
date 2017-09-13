#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#define N 105
using namespace std;
int c,r,i,j,maxen,map[N][N],maxlen[N][N],dir[4][2]={1,0,-1,0,0,1,0,-1};
int dp(int x,int y)
{
  int k,xx,yy,s,step=0;
  if(maxlen[x][y])
   return maxlen[x][y];
  for(k=0;k<4;k++)
  { 
    xx=x+dir[k][0];
    yy=y+dir[k][1];
    if(xx>=0 && xx<c && yy>=0 && yy<r && map[xx][yy]<map[x][y])
    {
        s=dp(xx,yy);
        if(s>step)
         step=s;
    }
  }
  return step+1;
}
int main()
{
    maxen=0;
    cin>>c>>r;
    for(i=0;i<c;i++)
     for(j=0;j<r;j++)
      cin>>map[i][j];
    for(i=0;i<c;i++)
     for(j=0;j<r;j++)
     {
         maxlen[i][j]=dp(i,j);
         if(maxlen[i][j]>maxen)
          maxen=maxlen[i][j];
     }
     cout<<maxen<<endl;
    return 0;
}