#include<cstdio>
#include<iostream>
#include<cstring>
const int maxn = 20;
using namespace std;
int main()
{
    int r,c,i,j,f,k,count,kase=1;
    char map[maxn][maxn];
    int down[maxn][maxn],across[maxn][maxn];
    while(scanf("%d",&r)!=EOF)
    {
      getchar();
      if(r==0) break;
      scanf("%d",&c);
      getchar();
      memset(down,0,sizeof(down));
      memset(across,0,sizeof(across));
      f=1; count=1;k=0;
      for(i=0;i<r;i++)
        gets(map[i]);
      for(i=0;i<r;i++)
          for(j=0;j<c;j++)
              if(map[i][j]!='*') 
                if(map[i][j-1]=='*' || map[i-1][j]=='*' || j-1<0 || i-1 < 0) {  k++; across[i][j]=k; }
      if(kase > 1) printf("\n");
      printf("puzzle #%d:\n",kase++);
      printf("Across\n");
      for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          if(map[i][j]!='*')
          {
            if(f==1) { printf("%3d.",across[i][j]); f=-f; }
            printf("%c",map[i][j]);
            if(i == r-1 && j == c-1) printf("\n");
            else if(map[i][j+1]=='*' && j == c-1) { printf("\n"); f=-f; }
            else if(map[i][j+1]=='*') { printf("\n"); f=-f; }
            else if(j == c-1)  { printf("\n"); f=-f; }
          }
      f=1;
      printf("Down\n");
      for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          if(map[i][j] != '*' && down[i][j] == 0)
          {
              for(k=i;k<r;k++)
              if(map[k][j]!='*')
              {
              if(f == 1) {printf("%3d.",across[k][j]); f=-f;}
              down[k][j]=1;
              printf("%c",map[k][j]);
              if(map[k+1][j]=='*' && k == r-1) {printf("\n"); f=-f; break; }
              else if(map[k+1][j]=='*') {printf("\n"); f=-f; break; }
              else if(k == r-1) { printf("\n"); f=-f; break; }
              }
          }
    }
    return 0;
}