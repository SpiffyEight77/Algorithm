#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int p;
    int m;
}g[110];
int v,n,sum;
bool cmp(node x,node y)
{
    return x.p > y.p;
}
int main()
{
    while(scanf("%d%d",&v,&n)!=EOF && v)
    {   
        sum = 0;
        for(int i = 0; i < n; i++)
            scanf("%d%d",&g[i].p,&g[i].m);
        sort(g,g+n,cmp);
        for(int i = 0; i < n; i++)
            if(v >= g[i].m)
            {
                sum += g[i].p * g[i].m;
                v -= g[i].m;
            }
            else
                if(v < g[i].m)
                {
                    sum += g[i].p * v;
                    break;
                }
        printf("%d\n",sum);
    }
    return 0;
}