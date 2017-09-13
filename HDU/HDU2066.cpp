#include<cstdio>
#include<iostream>
#include<cstring>
const int INF=99999999;
#define maxn 1010
using namespace std;
int map[maxn][maxn];
bool s[maxn],t[maxn];
int main()
{
    int x,y,z,i,j,k,T,S,D,n,m,len;
    while(scanf("%d%d%d",&T,&S,&D)!=EOF)
    {
        n=0;
        len=INF;
       for(i=1;i<=1000;i++)
        for(j=1;j<=1000;j++)
         if(i==j)
          map[i][j]=0;
          else
          map[i][j]=INF;
        map[i][i]=0;
       for(i=1;i<=T;i++)
       {
         scanf("%d%d%d",&x,&y,&z);
         n=x>n?x:n;
         n=y>n?y:n;
         if(map[x][y]>z)
          map[x][y]=map[y][x]=z;
       }
       memset(s,false,sizeof(s));
       memset(t,false,sizeof(t));
       for(i=1;i<=S;i++)
        {
            scanf("%d",&m);
            s[m]=true;
        }
       for(i=1;i<=D;i++)
        {
            scanf("%d",&m);
            t[m]=true;
        }
       for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
        if(map[i][k]!=INF)
         for(j=1;j<=n;j++)
           {
               map[i][j]=map[j][i]=min(map[i][j],map[i][k]+map[k][j]);
               if(s[i] && t[j] && len>map[i][j])
                len=map[i][j];
           }
       printf("%d\n",len);
    }
    return 0;
}