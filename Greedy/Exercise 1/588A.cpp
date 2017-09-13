#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int M = 100010;
int n,ans,mins;
struct node 
{
    int a,p;
}m[M];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
            scanf("%d %d",&m[i].a,&m[i].p);
        ans = m[0].a * m[0].p;
        mins = m[0].p;
        for (int i = 1; i < n; i++)
        {
            if(m[i].p > mins)
                ans += mins * m[i].a;
            else
            {
                ans += m[i].a * m[i].p;
                mins = m[i].p;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}