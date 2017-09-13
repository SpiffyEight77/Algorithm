#include<iostream>
#include<algorithm>
#include<set>
#define M 100010
using namespace std;
int T,n,m,x,y,c,p,ans;
bool f;
struct node
{
    int x,y;
}us[M],en[M];
bool cmp_us(node x,node y)
{
    return x.x > y.x;
}
bool cmp_en(node x,node y)
{
    return x.y > y.y;
}
int main()
{
    c = 0;
    scanf("%d",&T);
    while(T--)
    {
        f = true;
        scanf("%d%d",&n,&m);
        for (int i = 0; i < n; i++)
            scanf("%d%d",&us[i].x,&us[i].y);
        for (int i = 0; i < m; i++)
            scanf("%d%d",&en[i].x,&en[i].y);
        if(n < m)
        {
            printf("Case #%d: -1\n",++c);
            continue;
        }
        sort(us,us+n,cmp_us);
        sort(en,en+m,cmp_en);
        multiset<int> ms;
        p = 0;
        ans = 0;
        for (int i = 0; i < m; i++)
        {
            for(int j = p; j < n; j++)
            {
                if(us[j].x >= en[i].y)
                {
                    ms.insert(us[j].y);
                    p++;
                }
                else
                    break;
            }
            if(ms.empty())
            {
                f = false;
                break;
            }
            else
            {
                multiset<int>::iterator it;
                it = ms.upper_bound(en[i].x);
                if(it!=ms.end())
                    ms.erase(it);
                else
                {
                    ms.erase(ms.begin());
                    ans++;
                }
            }
        }
        if(f)
            printf("Case #%d: %d\n",++c,n-ans);
        else
            printf("Case #%d: -1\n",++c);
    }
    return 0;
}