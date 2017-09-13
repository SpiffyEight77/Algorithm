#include<cstdio>
#include<iostream>
#include<cstring>
const int maxn = 105;
using namespace std;
int main()
{
    char map[maxn][maxn],ch[10010];
    int k=0,x,y,nx,ny,i,j,flag,t;
    while(gets(map[0]))
    {
       flag=1;t=0;
       if(map[0][0] == 'Z')
        break;
       for(i=1;i<5;i++)
        gets(map[i]);
       for(i=0;i<5;i++)
           for(j=0;j<5;j++)
              if(map[i][j] == ' ')
                 {
                   x=i;y=j;nx=x;ny=y;
                   break;
                 }
      while(scanf("%c",&ch[t])!=EOF)
      {
           if(ch[t]=='0')
            break;
           t++;
      }
      getchar();
       for(i=0;i<t;i++)
       {   
          if(ch[i] == 'A')  x--;
          if(ch[i] == 'B')  x++;
          if(ch[i] == 'L')  y--;
          if(ch[i] == 'R')  y++;
          if(x >= 5 || y >= 5 || x<0 || y<0)
          {
              flag=0;
              break;
          }
          else
          {
             map[nx][ny]=map[x][y];
             map[x][y]=' ';
             nx=x;ny=y;
          }
      }
      if(k++) printf("\n");
      printf("Puzzle #%d:\n",k);
      if(flag == 0)
        printf("This puzzle has no final configuration.\n");
      else
      {
      for(i=0;i<5;i++)
       {
          printf("%c",map[i][0]);
          for(j=1;j<5;j++)
               printf(" %c",map[i][j]);
          printf("\n");
       }
      }
    }
    return 0;
}