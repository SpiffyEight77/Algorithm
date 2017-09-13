#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1100;
int n,d,l,num,ans,cnt;
struct node 
{
    int x,y,dis,cnt;
}p[M];
bool cmp(node x,node y)
{
    return x.x < y.x;
}
bool cmp_cnt(node x,node y)
{
    return x.cnt > y.cnt;
}
int dis(node x,int y)
{
    return (x.x - y) * (x.x - y) + x.y * x.y;  
}
int main()
{
    while(scanf("%d%d",&n,&d)!=EOF)
    {
        if(n == 0 && d == 0)
            break;
        for (int i = 0; i < n; i++)
            scanf("%d %d",&p[i].x,&p[i].y);
        sort(p,p+n,cmp);
        l = d * d;
        for (int i = p[0].x; i <= p[n-1].x; i++)
        {
            p[i].cnt = 0;
            for (int j = 0; j < n; j++)
                if(dis(p[i],i) <= l)
                    p[i].cnt++;
        }
        sort(p,p+n,cmp_cnt);
        for (int i = p[0].x; i <= p[n-1].x; i++)
            printf("x = %d cnt = %d\n",i,p[i].cnt);
        num = n;
        ans = 0;
        for (int i = p[n-1].x; i >= p[0].x; i--)
        {
            if(p[i].cnt <= num)
            {
                num-=p[i].cnt;
                ans++;
            }
        }
        if(num)
            printf("-1\n");
        else
            printf("%d\n",ans);
    }
    return 0;
}