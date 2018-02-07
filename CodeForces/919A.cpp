#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 10000
using namespace std;
int n,m;
double a,b,y[Maxn];
int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        y[i] = a / b;
    }
    sort(y,y+n);
    printf("%.8lf\n",y[0] * m);
    return 0;
}