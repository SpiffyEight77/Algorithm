#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define maxn 11010 
using namespace std;

double dis(double x,double y,double stop)
{
    return sqrt((x-stop)*(x-stop)+y*y);
}

int main()
{
    int n,t;
    double x,y,vb,vs;
    double stop[maxn];
    while(scanf("%d%lf%lf",&n,&vb,&vs)!=EOF)
    {
        t = 2;
        for(int i = 0; i < n; i++)
            scanf("%lf",&stop[i]);
        scanf("%lf%lf",&x,&y);
        double time1 = dis(x,y,stop[1])/vs+stop[1]/vb;
        for(int i = 2; i < n; i++)
        {
            double time2 = dis(x,y,stop[i])/vs+stop[i]/vb;
            if(time2 <= time1)
            {
                time1 = time2;
                t = i+1;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}