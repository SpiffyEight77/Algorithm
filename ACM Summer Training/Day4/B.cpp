#include<iostream>
#include<stack>
#include<cstring>
#define M 20
using namespace std;
int t,n,a[M],b[M];
bool vis[M],f;
void dfs(int now,int sum,int num)
{
    if(sum > t)
        return ;
    if(sum == t)
    {
        printf("%d",b[0]);
        for (int i = 1; i < num; i++)
            printf("+%d",b[i]);
        printf("\n");
        f = true;
        return ;
    }
    else
    {
        int t = -1;
        for (int i = now; i < n; i++)
        {
            if(!vis[i] && a[i] != t)
            {
                vis[i] = true;
                b[num++] = a[i];
                t = a[i];
                dfs(i+1,sum+a[i],num);
                num--;
                vis[i] = false;
            }
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d",&t,&n)!=EOF)
    {
        if(t == 0 && n == 0)
            break;
        f = false;
        memset(vis,0,sizeof(vis));
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        printf("Sums of %d:\n",t);
        dfs(0,0,0);
        if(!f)
            printf("NONE\n");
    }
    return 0;
}