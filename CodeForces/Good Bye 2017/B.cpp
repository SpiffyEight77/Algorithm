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

int n,m,x,y,sx,sy,ans,dir[4][2] = {1,0, -1,0, 0,-1, 0,1},a[4] = {0,1,2,3};
string S[Maxn],s;
bool f;

int main()
{
    cin>>n>>m;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>S[i];
        for (int j = 0; j < m; j++)
            if(S[i][j] == 'S') sx = i, sy = j;
    }

    cin>>s;

    do
    {
        x = sx; y = sy; f = false;
        for (int i = 0; i < s.size(); i++)
        {
            
            if(s[i] - '0' == a[0])
                x--;
            if(s[i] - '0' == a[1])
                x++;
            if(s[i] - '0' == a[2])
                y--;
            if(s[i] - '0' == a[3])
                y++;
            
            if(x >= n || y >= m || x < 0 || y < 0 || S[x][y] == '#') break;
            if(S[x][y] == 'E') { f = true; break;  }

        }
        if(f)
            ans++;        
    }while(next_permutation(a, a + 4));

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