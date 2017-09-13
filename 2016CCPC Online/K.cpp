#include<iostream>
#include<cstring>
using namespace std;
const int M = 100010;
int T,l,ans,c;
char s[M];
bool vis[M];
int main()
{
    scanf("%d",&T);
    c = 0;
    while(T--)
    {
        getchar();
        memset(vis,0,sizeof(vis));
        scanf("%s",s);
        l = strlen(s);
        ans = 0;
        for (int i = 0; i < l; i++)
        {
            if(!vis[s[i] - 'a'])
            {
                ans++;
                vis[s[i] - 'a'] = 1;
            }
        }
        printf("Case #%d: %d\n",++c,ans);
    }
    return 0;
}