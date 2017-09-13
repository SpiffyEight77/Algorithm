#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct tv{
    int begin;
    int end;
}t[110];
bool cmp(tv x,tv y)
{
    return x.end < y.end;
}
int n,num,curr;
int main()
{
    while(scanf("%d",&n) && n)
    {
        for(int i = 0; i < n; i++)
            scanf("%d %d",&t[i].begin,&t[i].end);
        sort(t,t+n,cmp);
        num = 1;
        curr = t[0].end;
        for(int i = 1; i < n; i++)
            if(t[i].begin >= curr)
            {
                num++;
                curr = t[i].end;
            }
        printf("%d\n",num);
    }
    return 0;
}