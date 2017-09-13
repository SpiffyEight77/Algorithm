#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#define M 10
using namespace std;
const int maxn = (1<<16) - 1;
int k,ans,status;
char map[M][M];
bool vis[maxn+10];
struct node
{
    int status,step;
};
int bfs(int status)
{
    memset(vis,0,sizeof(vis));
    queue<node>Q;
    node cur,next;
    cur.status = status;
    cur.step = 0;
    Q.push(cur);
    while(!Q.empty())
    {
        cur = Q.front();
        Q.pop();
        //printf("step = %d status = %d ",cur.step,cur.status);
        if(cur.status == 0 || cur.status == 65535)
            return cur.step;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                int k = 1<<(i * 4 + j);
                next.status = (cur.status^k);
                if(i - 1 >= 0)
                {
                    k = 1<<((i-1) * 4 + j);
                    next.status^=k;
                }
                if(i + 1 < 4)
                {
                    k = 1<<((i+1) * 4 + j);
                    next.status^=k;
                }
                if(j - 1 >= 0)
                {
                    k = 1<<(i * 4 + j - 1);
                    next.status^=k;
                }
                if(j + 1 < 4)
                {
                    k = 1<<(i * 4 + j + 1);
                    next.status^=k;
                }
                if(!vis[next.status])
                {   
                    vis[next.status] = 1;
                    next.step = cur.step + 1;
                    Q.push(next);
                }
            }
        }
    }
    return -1;
}
int main()
{
    k = 0;
    status = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%s",map[i]);
        for (int j = 0; j < 4; j++)
        {
            if(map[i][j] == 'b')
                status += (1<<k);
            k++;
        }
        
    }
    //printf("%d\n",status);
    ans = bfs(status);
    if(ans != -1)
        printf("%d\n",ans);
    else
        printf("Impossible\n");
    return 0;
} 