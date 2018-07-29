#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define maxn 1000 + 10
using namespace std;
int n,m,token,t,maze[maxn][maxn],pos[4];
char s[maxn * 10];

void input() {
  scanf("%d %d",&n,&m);
  getchar();
  gets(s);
}

void init() {
  memset(maze,0,sizeof(maze));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      maze[i * 2 + 1][j * 2 + 1] = 1;
}

bool judge() {
  if(pos[0] + 2 == pos[2] && pos[1] == pos[3]) {
    maze[pos[0] + 1][pos[1]] = 1;
  }
  else
    if(pos[2] + 2 == pos[0] && pos[1] == pos[3]) {
      maze[pos[2] + 1][pos[1]] = 1;
    }
  else
    if(pos[0] == pos[2] && pos[1] + 2== pos[3] ) {
      maze[pos[0]][pos[1] + 1] = 1;
    }
  else
    if(pos[2] == pos[0] && pos[3] + 2 == pos[1]) {
      maze[pos[2]][pos[3] + 1] = 1;
    }
  else {
    cout<<"Maze format error."<<endl;
    return false;
  }
  return true;
}

bool process_string() {

  token = 0;

  for (int i = 0; i < strlen(s); i++) {
    if(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
      t = 0;
      for (int k = i; ; k++) {
        if(s[k] == ' ' || s[k] == ',' || s[k] == ';' || s[k] == '\0') {
          pos[token % 4] = t * 2 + 1;
          if(pos[token % 4] >= maxn) {
            cout<<"Number out of range."<<endl;
            return false;
          }
          token++;
          i = k;
          break;
        }
        else
          if(s[k] - '0' >= 0 && s[k] - '0' <= 9)
            t = t * 10 + (s[k] - '0');
        else {
          cout<<"Invalid number format."<<endl;
          return false;
        }
      }
    }
    else
      if(s[i] != ' ' || s[i] != ',' || s[i] != ';' || s[i] != '\0') {
        cout<<"Incorrect command format."<<endl;
        return false;
      }

    if((token == 4) && (s[i] == ';' || s[i] == '\0')) {
      token = 0;
      if(judge() == false)
        return false;
    }
    else
      if((token == 4) && (s[i] != ';' || s[i] != '\0')) {
        cout<<"Incorrect command format."<<endl;
        return false;
    }
  }
  return true;
}

void result() {
  for (int i = 0; i < 2 * n + 1; i++) {
    for (int j = 0; j < 2 * m + 1; j++) {
      if(maze[i][j])
        printf("[R]");
      else
        printf("[W]");
      if(j != 2 * m)
        cout<<" ";
    }
    printf("\n");
  }
}

int main() {

  input();

  init();

  if(!process_string())
    return 0;
  else
    result();

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
