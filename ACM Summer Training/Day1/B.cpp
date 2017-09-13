#include<iostream>
#include<cstdio>
#include<cstring>
#define M 1000010
using namespace std;
int T,n,S,l,maxlen,a[M],pos[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        memset(a,0,sizeof(a));
        memset(pos,-1,sizeof(pos));
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        S = 0;
        maxlen = 0;
        a[n] = a[n-1];
        for (int i = 0; i <= n; i++)
        {
            if(pos[a[i]] >= S)
            {
                l = i - S;
                maxlen = max(maxlen,l);
                S = pos[a[i]]+1;
                pos[a[i]] = i;
            }
            else
                pos[a[i]] = i;
        }
        printf("%d\n",maxlen);
    }
    return 0;
}


#include<iostream>
#include<algorithm>
#include<set>
#define M 1000010
using namespace std;
int T,n,L,R,ans,a[M];
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        set<int>s;
        s.clear();
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        L = 0; R = 0; ans = 0;
        for (int i = 0; i < n; i++)
        {
            while(s.count(a[i]))
                s.erase(a[L++]);
        
            s.insert(a[i]);
            ans = max(ans,i - L + 1);
        }
        printf("%d\n",ans);
    }
    return 0;
}


