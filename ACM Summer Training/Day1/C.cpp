#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int M = 220,INF = 0x3f3f3f;
int n,ans,area1,area2,u,d,l,r;
bool vis[M][M];
struct node
{
    int x,y;
}point[M];
bool online(node x,node y)
{
    if(x.x == y.x || x.y == y.y) return true;
    return false;
}
int getArea(node A,node B,node &C,node &D)
{
    if(A.x > B.x) swap(A,B);
    C.x = A.x; C.y = B.y;
    D.x = B.x; D.y = A.y;
    if(vis[C.x][C.y] && vis[D.x][D.y]) return abs(A.x-B.x) * abs(A.y-B.y); 
    return -INF;
}
bool isin(node &A)
{
    if(A.x < r && A.x > l && A.y < u && A.y > d) return true;
    return false;
}
bool islegal(node &A)
{
    if(A.x <= r && A.x >= l && A.y <= u && A.y >= d) return  false;
    return true;
}
int main()
{
    while(scanf("%d",&n) && n)
    {

        memset(vis,0,sizeof(vis));
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d",&point[i].x,&point[i].y);
            vis[point[i].x][point[i].y] = 1;
        }
        if(n < 8)
        {
            printf("imp\n");
            continue;
        }
        node C,D;
        ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(online(point[i],point[j])) continue;
                area1 = getArea(point[i],point[j],C,D);
                if(area1 == -INF) continue;
                u = max(point[i].y,point[j].y);
                d = min(point[i].y,point[j].y);
                l = min(point[i].x,point[j].x);
                r = max(point[i].x,point[j].x);

                for (int k = 1; k <= n; k++)
                {
                    for (int l = 1; l <= n; l++)
                    {
                        if(online(point[k],point[l])) continue;
                        area2 = getArea(point[k],point[l],C,D);
                        if(area2 == -INF || area1 < area2) continue;
                        if(isin(point[k]) && isin(point[l]) && isin(C) && isin(D)) ans = max(ans,area1);
                        if(islegal(point[k]) && islegal(point[l]) && islegal(C) && islegal(D)) ans = max(ans,area1+area2); 
                    }
                }
            }
        }
        if(ans)
            printf("%d\n",ans);
        else
            printf("imp\n");
    }
    return 0;
}