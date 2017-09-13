#include<iostream>
#include<algorithm>
using namespace std;
int n,ans,s,e;
struct node
{
    int s,e;
}t[110];
bool cmp(node x,node y)
{
    return x.e < y.e;
}
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        ans = 1;
        for (int i = 0; i < n; i++)
            scanf("%d%d",&t[i].s,&t[i].e);
        sort(t,t+n,cmp);
        s = t[0].s; 
        e = t[0].e;
        for (int i = 1; i < n; i++)
        {
            if(t[i].s >= e)
            {
                ans++;
                e = t[i].e;
                s = t[i].s;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}