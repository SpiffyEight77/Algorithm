#include<iostream>
#include<queue>
#include<cstring>
#define M 1000100
using namespace std;
int n,k,a[M],step[M];
bool f,vis[M];
void bfs()
{
    queue<int> q;
    while(!q.empty()) q.pop();
    q.push(n);
    step[n] = 0;
    vis[n] = true;
    while(!q.empty())
    {
        int t = q.front();
        q.pop();
        if(t + 1 == k || t - 1 == k || t * 2 == k)
        {
            step[k] = step[t] + 1;
            printf("%d\n",step[k]);
            break;
        }
        if(t + 1 <= M && !vis[t+1])
        {
            q.push(t+1);
            vis[t+1] = true;
            step[t+1] = step[t] + 1;
        }
        if(t - 1 >= 0 && !vis[t-1])
        {
            q.push(t-1);
            vis[t-1] = true;
            step[t-1] = step[t] + 1;
        }
        if(t * 2 <= M && !vis[t*2])
        {
            q.push(t*2);
            vis[t*2] = true;
            step[t*2] = step[t] + 1;
        }
    }
    return ;
}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        if(n == k)
        {
            printf("0\n");
            continue;
        }
        f = false;
        bfs();
    }
    return 0;
}