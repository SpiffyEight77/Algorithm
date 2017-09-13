#include<iostream>
using namespace std;
struct angle
{
    int x;
    int y;
}a[1010];
int n;
bool f,r;
bool judge(angle a,angle b,angle c)
{
    return ((c.y - a.y) * (b.x-a.x) - (c.x - a.x) * (b.y - a.y) ) < 0 ;
}
int main()
{
    while(scanf("%d",&n) && n)
    {
        f = true; r = true;
        for(int i = 0; i < n; i++)
            scanf("%d%d",&a[i].x,&a[i].y);
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
                r = judge(a[0],a[1],a[n - 1]);
            else
                if(i == n - 1)
                    r = judge(a[n - 1],a[0],a[n - 2]);
            else
                r = judge(a[i],a[i + 1],a[i - 1]);
            if(r)
            {    
                f = false; 
                printf("concave\n");
                break;
            }
        }
        if(f)
            printf("convex\n");
    }
    return 0;
}