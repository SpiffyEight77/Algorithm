#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int M = 55;
int n,m,cnt;
char s[M][M];
int main()
{
    memset(s,0,sizeof(s));
    scanf("%d%d",&n,&m);
    getchar();
    for (int i = 0; i < n; i++)
        scanf("%s",s[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cnt = 0;
            if(s[i][j] == '.')
            {
                if(s[i][j+1] == '#')
                    cnt++;
                if(s[i][j-1] == '#')
                    cnt++;
                if(s[i+1][j] == '#')
                    cnt++;
                if(s[i-1][j] == '#')
                    cnt++;
                if(s[i+1][j+1] == '#')
                    cnt++;
                if(s[i+1][j-1] == '#')
                    cnt++;
                if(s[i-1][j+1] == '#')
                    cnt++;
                if(s[i-1][j-1] == '#')
                    cnt++;
                s[i][j] = cnt + '0'; 
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%c",s[i][j]);
        printf("\n");
    }
    return 0;
}