#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#define M 100100
using namespace std;
int n,tmp1,tmp2,a[M];
long long ans;
priority_queue<int,vector<int>,greater<int> >Q;
int main()
{
    // while(scanf("%d",&n)!=EOF)
    // {
        scanf("%d",&n);
        ans = 0; 
        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        sort(a+1,a+n+1);
        for (int i = 1; i <= n; i++)
            Q.push(a[i]);
        for (int i = 1; i < n; i++)
        {
            tmp1 = Q.top();
            Q.pop();
            tmp2 = Q.top();
            Q.pop();
            Q.push(tmp1+tmp2);
            ans += tmp1 + tmp2;
        }
        printf("%lld\n",ans);
    //}
    return 0;
}