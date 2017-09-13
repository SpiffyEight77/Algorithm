#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    double n,m,x,y;
    while(scanf("%lf%lf%lf%lf",&n,&m,&x,&y)!=EOF)
    {
        if(x == n/2 && y == m/2)
            printf("YES\n");
        else
            printf("NO\n"); 
    }
    return 0;
}
