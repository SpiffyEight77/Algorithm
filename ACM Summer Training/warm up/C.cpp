#include<iostream>
#include<algorithm>
using namespace std;
struct goods
{
    double v;
    double p;
    double r;
}g[110];
int v,n,sum;
bool cmp(goods x,goods y)
{
    return x.p > y.p;
}
int main()
{
    while(scanf("%d%d",&v,&n) && v)
    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lf%lf",&g[i].p,&g[i].v);
            g[i].r = g[i].p / g[i].v;
        }
        sort(g,g+n,cmp);
        for(int i = 0; i < n; i++)
            if(v >= g[i].v)
                v -= g[i].v, sum += g[i].p * g[i].v;
            else
            {
                sum += v * g[i].p;
                break;
            }
        printf("%d\n",sum);
    }
    return 0;
}