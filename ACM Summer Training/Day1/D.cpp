#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int M = 220;
const double eps = 1e-8;
int n,cnt,ans,tmp;
bool vis[M][M];
struct node
{
    double x,y;
}point[M];
struct tri
{
    double l[3];
}t[M*M*M];
bool inLine(node p0,node p1,node p2)
{
    return ( (p1.x-p0.x) * (p2.y-p0.y) - (p1.y - p0.y) * (p2.x - p0.x));
}
double dis(node x,node y)
{
    return sqrt( (x.x - y.x) * (x.x-y.x) + (x.y-y.y) * (x.y-y.y) );
}
bool judge(tri x,tri y)
{
    double a1,a2,b1,b2,c1,c2;
    a1 = x.l[0]; b1 = x.l[1]; c1 = x.l[2];
    a2 = y.l[0]; b2 = y.l[1]; c2 = y.l[2];
    if(fabs(a1 * b2 - b1 * a2) < eps && fabs(a1 * c2 - c1 * a2) < eps && fabs(b1 * c2 - c1 * b2) < eps)
        return true;
    return false;
}
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        memset(vis,0,sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            scanf("%lf%lf",&point[i].x,&point[i].y);
            for (int j = 0; j < i; j++)
                if(point[j].x == point[i].x && point[j].y == point[i].y)
                {
                        i--;
                        n--;
                        break;
                }
        }
        cnt = 0;
        if(n < 3)
        {
            printf("0\n");
            continue;
        }
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                for (int k = j + 1; k < n; k++)
                    if(inLine(point[i],point[j],point[k]))
                    {
                        t[cnt].l[0] = dis(point[i],point[j]);
                        t[cnt].l[1] = dis(point[i],point[k]);
                        t[cnt].l[2] = dis(point[j],point[k]);
                        sort(t[cnt].l,t[cnt].l+3);
                        cnt++;
                    }
        ans = 0;
        for (int i = 0; i < cnt; i++)
        {
            tmp = 1;
            for (int j = i + 1; j < n; j++)
                if(judge(t[i],t[j]))
                    tmp++;
            ans = max(ans,tmp);
        }
        printf("%d\n",ans);
    }
    return 0;
}