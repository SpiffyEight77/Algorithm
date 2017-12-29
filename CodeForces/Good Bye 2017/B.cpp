#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}



int n,m,sx,sy,ex,ey,ans,num,dir[4][2] = {1,0, -1,0, 0,-1, 0,1};
string S;
char s[55][55],mark[Maxn];

void dfs(int x,int y)
{
    if(x == ex && y == ey)
    {
        for (int i = 0; i < S.size(); i++)
            if()
        ans++;
        return ;
    }   

    for (int i = 0; i < 4; i++)
    {
        x+=dir[i][0];
        y+=dir[i][1];
        
        if(s[x][y] != '#' && x >= 0 && x < n && y >= 0 && y < m)
        {
            if(i == 0)
                mark[num] = 'U';
            else
                if(i == 1)
                    mark[num] = 'D';
            else
                if(i == 2)
                    mark[num] = 'L';
            else
                if(i == 3)
                    mark[num] = 'R';
            num++;
            dfs(x,y);
            num--;
            mark[num] = ' ';
        }
    }


    return ;
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>s[i][j];
            if(s[i][j] == 'S')
                sx = i, sy = j;
            if(s[i][j] == 'E')
                ex = i, ey = j;
        }
        getchar();
    }

    cin>>S;

    num = 0;

    dfs(ex,ey);

    cout<<ans<<endl;

    return 0;
}  

// U D L R 
// 0 1 2 3
// 0 1 3 2
// 0 2 1 3
// 0 2 3 1
// 0 3 1 2
// 0 3 2 1

// 1 0 2 3
// 1 0 3 2
// 1 2 0 3
// 1 2 3 0
// 1 3 0 2
// 1 3 2 0

// 2 0 1 3
// 2 0 3 1
// 2 1 0 3
// 2 1 3 0
// 2 3 0 1
// 2 3 1 0

// 3 0 1 2
// 3 0 2 1
// 3 1 0 2
// 3 1 2 0
// 3 2 0 1
// 3 2 1 0