#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct tt
{
    double angle;
    int h;
    int m;
}t[6];
int T,n;
bool cmp(tt x,tt y)
{
    if(x.angle == y.angle)
        return x.h < y.h;
    return x.angle < y.angle;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        for(int i = 0; i < 5; i++)
        {
            scanf("%d:%d",&t[i].h,&t[i].m);
            t[i].angle = (t[i].h > 12) ? abs( (t[i].h - 12) * 30 + 0.5 * t[i].m - t[i].m * 6) : abs( t[i].h * 30 + 0.5 * t[i].m - t[i].m * 6);
            t[i].angle = (t[i].angle > 180) ? 360 - t[i].angle : t[i].angle;
        }
        sort(t,t+5,cmp);
        printf("%02d:%02d\n",t[2].h,t[2].m);
    }
    return 0;
}