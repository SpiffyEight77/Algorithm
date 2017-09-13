#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int n,m,x,y,Max,map[22][22],s[22][22];
int main()
{
    while(scanf("%d %d",&n,&m))
    {
        if(n == 0 && m == 0)
            break;
        memset(map,0,sizeof(map));
        memset(s,0,sizeof(s));
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                scanf("%d",&map[i][j]);
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
            {
                if(map[i][j] * map[i-1][j] < 0)
                    s[i][j] += abs(map[i-1][j]);
                else
                    s[i][j] -= abs(map[i-1][j]);
                
                if(map[i][j] * map[i+1][j] < 0)
                    s[i][j] += abs(map[i+1][j]);
                else
                    s[i][j] -= abs(map[i+1][j]);
                
                if(map[i][j] * map[i][j-1] < 0)
                    s[i][j] += abs(map[i][j-1]);
                else
                    s[i][j] -= abs(map[i][j-1]);

                if(map[i][j] * map[i][j+1] < 0)
                    s[i][j] += abs(map[i][j+1]);
                else
                    s[i][j] -= abs(map[i][j+1]);
            }

            Max = -9999;

            for(int i = 1; i <= n; i++)
                for(int j = 1; j <= m; j++)
                    if(s[i][j] > Max)
                    {
                        x = i;
                        y = j;
                        Max = s[i][j];
                    }
            printf("%d %d %d\n",x,y,Max);
    }
    return 0;
}