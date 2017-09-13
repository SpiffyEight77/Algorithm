#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 2200;
int n,m,ans1,ans2,line,map[M][M],h[M][M],l[M][M],r[M][M];
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        memset(map,0,sizeof(map));
        memset(h,0,sizeof(h));
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%d",&map[i][j]);
        
        for (int i= 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                if(map[i][j] == map[i][j-1])
                    l[i][j] = 1;
                else
                    l[i][j] = l[i][j-1] + 1;

            for (int j = m; j >= 1; j--)
                if(map[i][j] == map[i][j+1])
                    r[i][j] = 1;
                else
                    r[i][j] = r[i][j+1] + 1;
        }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if(map[i][j] == map[i-1][j])
                    h[i][j] = 1;
                else
                {
                    h[i][j] = h[i-1][j] + 1;
                    l[i][j] = min(l[i][j],l[i-1][j]);
                    r[i][j] = min(r[i][j],r[i-1][j]);
                }
        ans1 = 0; ans2 = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                line = min(h[i][j],l[i][j]+r[i][j]-1);
                ans1 = max(ans1,line*line);
                ans2 = max(ans2,h[i][j]*(l[i][j]+r[i][j]-1));
            }
        }
        printf("%d\n%d\n",ans1,ans2);
    }
    return 0;
}