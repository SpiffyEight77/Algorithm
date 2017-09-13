#include<cstdio>
#include<iostream>
#include<queue>
#include<cstring>
#define maxn 100
#define INF 99999999
using namespace std;
int n,m,s,d,dis[maxn],road[maxn][maxn],cot[maxn],vis[maxn];
bool spfa()
{
    int i,t;
    for(i=1;i<=n;i++)
       dis[i]=INF;
    memset(vis,0,sizeof(vis));
    memset(cot,0,sizeof(cot));
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        vis[t]=0;
        ++cot[t];
        if(cot[t]>n)
         return false;
        for(i=1;i<=n;i++)
        {
            if(dis[i]>dis[t]+road[t][i])
            {
                dis[i]=dis[t]+road[t][i];
                if(!vis[i])
                {
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
    }
    return true;
}
int main()
{
    int i,j,u,v,w;
    while(cin>>n>>m)
    {
        for(i=1;i<=n;i++)
          for(j=1;j<=n;j++)
           road[i][j]= i==j ? 0:INF;
        for(i=1;i<=m;i++)
        {
            scanf("%d %d %d",&u,&v,&w);
            road[u][v]=road[v][u]=w;
        }
        scanf("%d %d",&s,&d);
        if(spfa())
        {
            cout<<dis[d]<<endl;
        }
        else
            cout<<"sorry!"<<endl;
    }
    return 0;
}