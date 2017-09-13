#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 10010;
int c,n,a[M];
bool vis[M],prime[M];
void dfs(int num)
{
    if(num > n && !prime[a[1] + a[num-1]])
    {
        printf("%d",a[1]);
        for (int j = 2; j <= n; j++)
            printf(" %d",a[j]);
        printf("\n");
        return ;
    }
    for (int i = 2; i <= n; i++)
    {
        if(!vis[i] && !prime[i + a[num-1]])
        {
            vis[i] = 1;
            a[num++] = i;
            dfs(num);
            vis[i] = 0;
            num--;
        }
    }
    return ;
}
int main()
{
    memset(prime,0,sizeof(prime));
    prime[1] = 1;
    for (int i = 2; i <= 100; i++)
        if(!prime[i])
            for (int j = i + i; j <= 100; j+=i)
                prime[j] = 1;
    while(cin>>n)
    {
        memset(vis,0,sizeof(vis));
        a[1] = 1;
        vis[1] = 1;
        printf("Case %d:\n",++c);
        dfs(2);
        printf("\n");
    }
    return 0;
}