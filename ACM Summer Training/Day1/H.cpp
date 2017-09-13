#include<iostream>
#include<algorithm>
using namespace std;
int n,d,sum;
struct node
{
    int d,h;
}a[22];
bool cmp(node x,node y)
{
    return 1.0 * x.d / x.h > 1.0 * y.d / y.h;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        d = 0;
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d",&a[i].d,&a[i].h);
            d+=a[i].d;
        }
        sort(a,a+n,cmp);
        for(int i = 0; i < n; i++)
        {
            sum += d*a[i].h;
            d-=a[i].d;
        }
        printf("%d\n",sum);
    }
    return 0;
}