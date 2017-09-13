#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int T;
struct node
{
    int s;
    int f;
    double angle;
}a[10];
bool cmp(node x,node y)
{
    if(x.angle == y.angle)
        return x.s < y.s;
    return x.angle < y.angle;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        memset(a,0,sizeof(a));
        for(int i = 0; i < 5; i++)
        {
            scanf("%d:%d",&a[i].s,&a[i].f);
            if(a[i].s > 12)
                a[i].angle = abs( (a[i].s - 12) * 30 + a[i].f * 0.5 - a[i].f * 6);
            else
                a[i].angle = abs(a[i].s * 30 + a[i].f * 0.5 - a[i].f * 6);
            if(a[i].angle > 180)
                a[i].angle = 360 - a[i].angle;
        }
        sort(a,a+5,cmp);
        printf("%02d:%02d\n",a[2].s,a[2].f);
    }
    return 0;
}