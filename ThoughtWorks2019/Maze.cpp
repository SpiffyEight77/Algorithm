#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define maxn 1000 + 10
using namespace std;
int n,m,token,t;
int maze[maxn][maxn];
int maze_connect[2][maxn][maxn];
int pos[4];
char s[maxn];
int main()
{
  memset(maze,0,sizeof(maze));
  memset(maze_connect,0,sizeof(maze_connect));

  scanf("%d %d",&n,&m);
  getchar();
  gets(s);

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      maze[i * 2 + 1][j * 2 + 1] = 1;

  token = 0;

  for (int i = 0; i < strlen(s); i++)
  {
    if(s[i] - '0' >= 0 && s[i] - '0' <= 9)
    {

      if(s[i + 1] != ',' || s[i+1] != ' ' || s[i+1] != ';' || s[i+1] != '\0')
      {
        t = 0;
        for (int k = i; ; k++)
        {
          if(s[k] == ' ' || s[k] == ',' || s[k] == ';' || s[k] == '\0')
          {
            pos[token % 4] = t * 2 + 1;
            token++;
            i = k;
            break;
          }
          else
            t = t * 10 + (s[k] - '0');
        }
      }
      else
      {
        pos[token % 4] = (s[i] - '0') * 2 + 1;
        token++;
      }
    }

    if(token == 4)
    {
      token = 0;
      if(pos[0] + 2 == pos[2] && pos[1] == pos[3])
      {
        maze[pos[0] + 1][pos[1]] = 1;
      }
      else
        if(pos[2] + 2 == pos[0] && pos[1] == pos[3])
        {
          maze[pos[2] + 1][pos[1]] = 1;
        }
      else
        if(pos[0] == pos[2] && pos[1] + 2== pos[3] )
        {
          maze[pos[0]][pos[1] + 1] = 1;
        }
      else
        if(pos[2] == pos[0] && pos[3] + 2 == pos[1])
        {
          maze[pos[2]][pos[3] + 1] = 1;
        }
    }
  }

  for (int i = 0; i < 2 * n + 1; i++)
  {
    for (int j = 0; j < 2 * m + 1; j++)
    {
      if(maze[i][j])
        printf("[R] ");
      else
        printf("[W] ");
    }
    printf("\n");
  }
  return 0;
}

// 输入测试用例
// 3 3
// 0,1 0,2;0,0 1,0;0,1 1,1;0,2 1,2;1,0 1,1;1,1 1,2;1,1 2,1;1,2 2,2;2,0 2,1

// 程序运行结果
// [W] [W] [W] [W] [W] [W] [W]
// [W] [R] [W] [R] [R] [R] [W]
// [W] [R] [W] [R] [W] [R] [W]
// [W] [R] [R] [R] [R] [R] [W]
// [W] [W] [W] [R] [W] [R] [W]
// [W] [R] [R] [R] [W] [R] [W]
// [W] [W] [W] [W] [W] [W] [W]
