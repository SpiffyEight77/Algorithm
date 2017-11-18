#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100000;
int a[10],n;
int main()
{
    scanf("%d",&n);
    a[1] = n/1000;
    a[2] = n/100%10;
    a[3] = n/10%10;
    a[4] = n%10;
    if(a[1] + a[2] + a[3] + a[4] == 7)
        printf("%d+%d+%d+%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] + a[2] + a[3] - a[4] == 7)
            printf("%d+%d+%d-%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] + a[2] - a[3] + a[4] == 7)
            printf("%d+%d-%d+%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] - a[2] + a[3] + a[4] == 7)
            printf("%d-%d+%d+%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] + a[2] - a[3] - a[4] == 7)
            printf("%d+%d-%d-%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] - a[2] + a[3] - a[4] == 7)
            printf("%d-%d+%d-%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] - a[2] - a[3] + a[4] == 7)
            printf("%d-%d-%d+%d=7\n",a[1],a[2],a[3],a[4]);
    else
        if(a[1] - a[2] - a[3] - a[4] == 7)
            printf("%d-%d-%d-%d=7\n",a[1],a[2],a[3],a[4]);

    return 0;
}