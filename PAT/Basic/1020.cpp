#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Maxn 100000 + 10
using namespace std;
int n,d;
double ans = 0;
struct mooncake
{
    double amount;
    double price;
    double p;
}mc[Maxn];
bool cmp(mooncake x,mooncake y)
{
    return x.p > y.p;
}
int main()
{
    cin>>n>>d;
    for (int i = 0; i < n; i++)
        cin>>mc[i].amount;
    for (int i = 0; i < n; i++)
    {
        cin>>mc[i].price;
        mc[i].p = mc[i].price / mc[i].amount;
    }
    sort(mc,mc+n,cmp);
    for (int i = 0; i < n; i++)
    {
        if(mc[i].amount <= d)
        {
            d-=mc[i].amount;
            ans += mc[i].amount * mc[i].p;
        }
        else
        {
            ans += d * mc[i].p;
            break;
        }
    }
    printf("%.2lf\n",ans);
    return 0;
}