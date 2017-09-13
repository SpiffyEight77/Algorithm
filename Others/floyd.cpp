#include<cstdio>
#include<iostream>
#include<cstring>
#define inf 999999999
using namespace std;
int way[11][11],i,j,n,m,k,t1,t2,t3;
int main()
{
    while(cin>>n>>m)
    {
      for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)
        {
            if(i==j)
             way[i][j]=0;
            else
             way[i][j]=inf;
        }
      for(i=1;i<=m;i++)
      {
          cin>>t1>>t2>>t3;
          way[t1][t2]=t3;
      }
      for(k=1;k<=n;k++)
       for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
         {
             if(way[i][k]+way[k][j]<way[i][j])
                way[i][j]=way[i][k]+way[k][j];
         }
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
          printf("%d ",way[i][j]);
         printf("\n");
     }
    }
    return 0;
}
