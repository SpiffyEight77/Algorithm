#include<iostream>
#include<algorithm>
using namespace std;
struct rate
{
    double j;
    double f;
    double r;
}r[1010];
bool cmp(rate x,rate y)
{
    return x.r > y.r;
}
int n,m;
double sum;
int main()
{
    while(scanf("%d%d",&m,&n))
    {
        if(m == -1 && n == -1)
            break;
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lf %lf",&r[i].j,&r[i].f);
            r[i].r = r[i].j/r[i].f;
        }
        sort(r,r+n,cmp);
        for(int i = 0; i < n; i++)
            if(m >= r[i].f)
            {
                m -= r[i].f;
                sum+=r[i].j;
            }
            else
                if(m)
                {
                    sum+=m*r[i].r;
                    m -= m;
                    break;
                }
        printf("%.3lf\n",sum);
    }
    return 0;
}