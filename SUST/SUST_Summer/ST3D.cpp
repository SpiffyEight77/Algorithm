#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct wood
{
    int l;
    int w;
    bool f;
}w[5050];
bool cmp(wood x,wood y)
{
    if(x.l == y.l)
        return x.w < y.w;
    return x.l < y.l;
}
int t,n,curr,ans;
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        ans = 0;
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
        {
            scanf("%d%d",&w[i].l,&w[i].w);
            w[i].f = true;
        }
        sort(w,w+n,cmp);

        // for(int i = 0; i < n; i++)
        //     printf("%d %d ",w[i].l,w[i].w);

        for(int i = 0; i < n; i++)
        {
            if(w[i].f)
            {
                curr = i;
                w[i].f = false;
                ans++;
            }
            else
                continue;
            for(int j = i+1; j < n; j++)
            {
                if(w[j].l >= w[curr].l && w[j].w >= w[curr].w && w[j].f == true)
                {   
                    curr = j;
                    w[j].f = false;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}