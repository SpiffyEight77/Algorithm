#include<iostream>
#include<cmath>
using namespace std;
int L,sx,sy,px,py;
int gcd(int x,int y)
{
    return y == 0 ? x : gcd(y,x % y);
}
int main()
{
    while(scanf("%d %d%d%d%d",&L,&sx,&sy,&px,&py)!=EOF && L)
    {
        if(abs(px) > L || abs(py) > L)
        {
            printf("Out Of Range\n");
            continue;
        }
        px = abs(px - sx);
        py = abs(py - sy);
        if(sqrt(px * px + py * py ) <= sqrt(2))
            printf("Yes\n");
        else
            if(gcd(px,py) == 1)
                printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}