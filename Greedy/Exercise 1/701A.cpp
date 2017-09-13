#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,sum;
struct node
{
    int x,p;
}a[110];
bool cmp(node x,node y)
{
    return x.x < y.x;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&a[i].x);
            a[i].p = i;
            sum+=a[i].x;
        }
        sum/=n/2;
        sort(a+1,a+n+1,cmp);
        for (int i = 1; i <= n/2; i++)
            printf("%d %d\n",a[i].p,a[n-i+1].p);
    }
    return 0;
}