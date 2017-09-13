#include<iostream>
#include<algorithm>
using namespace std;
struct lesson
{
    int d;
    int s;
}l[1010];
bool cmp(lesson x,lesson y)
{
    if(x.s == y.s)
        return x.d < y.d;
    return x.s > y.s;
}
int t,n,sum;
bool mark[1010];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        for(int i = 1; i <= n; i++)
            scanf("%d",&l[i].d);
        for(int i = 1 ; i <= n; i++)
        {    
            scanf("%d",&l[i].s);
            sum += l[i].s;
            mark[i] = true;
        }
        sort(l+1,l+1+n,cmp);
        for(int i = 1; i <= n; i++)
            for(int j = l[i].d; j >= 1; j--)
                if(mark[j])
                {
                    sum -= l[i].s;
                    mark[j] = false;
                    break;
                }
        printf("%d\n",sum);
    }
    return 0;
}