#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int M =  220;
const int N = 22;
int n,ans,res,cnt,tmp,line[3];
bool vis[M][M];
struct node
{
    int x,y;
}point[M];
struct triangle
{
    int a,b,c;
}t[N*N*N];
bool inLine(node p0,node p1,node p2)
{
    return (p1.x - p0.x) * (p2.y - p0.y) - (p1.y-p0.y) * (p2.x-p0.x);
}
int dis(node x,node y)
{
    return (x.x - y.x) * (x.x - y.x) + (y.y - x.y) * (y.y - x.y);
}
bool judge(triangle x,triangle y)
{
    if( (x.a * y.b == x.b * y.a) && (x.b * y.c == x.c * y.b) && (x.a * y.c == x.c * y.a) ) 
        return true;
    return false;
}
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        memset(line,0,sizeof(line));
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d",&point[i].x,&point[i].y);
            for (int j = 0; j < i; j++)
                if(point[i].x == point[j].x && point[i].y == point[j].y)
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
                        line[0] = dis(point[i],point[j]);
                        line[1] = dis(point[i],point[k]);
                        line[2] = dis(point[j],point[k]);
                        sort(line,line+3);
                        t[cnt].a = line[0];
                        t[cnt].b = line[1];
                        t[cnt].c = line[2];
                        cnt++;
                    }
        ans = 0;
        //printf("cnt = %d\n",cnt);
        for (int i = 0; i < cnt; i++)
        {
            tmp = 1;
            for (int j = i + 1; j < cnt; j++)
                if(judge(t[i],t[j]))
                    tmp++;
            ans = max(ans,tmp);    
        }
        printf("%d\n",ans);
    }
    return 0;
}