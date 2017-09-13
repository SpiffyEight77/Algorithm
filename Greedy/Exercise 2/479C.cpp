#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,p;
struct node
{
    int a,b;
}x[5500];
bool cmp(node x,node y)
{
    if(x.a == y.a)  return x.b < y.b;
    return x.a < y.a;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d%d",&x[i].a,&x[i].b);
        sort(x,x+n,cmp);
        p = 0;
        for (int i = 0; i < n; i++)
            if(p <= x[i].b)
                p = x[i].b;
            else
                p = x[i].a;
        printf("%d\n",p);
    }
    return 0;
}