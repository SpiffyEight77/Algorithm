#include<iostream>
#include<algorithm>
#include<cstring>
#define M 100010
using namespace std;
int T,n,c,L,R,p,ans,sum,a[M];
int main()
{
    c = 0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        L = 0; R = 0; p = 0; ans = 0; 
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        ans = a[0];
        for (int i = 1; i < n; i++)
        {
            if(a[i-1] < 0)
            {
                p = i;
                a[i-1] = 0;
            }
            a[i] += a[i-1];
            if(a[i] > ans)
            {
                ans = a[i];
                R = i;
                L = p;
            }
        }
        printf("Case %d:\n%d %d %d\n",++c,ans,L+1,R+1);
        if(T)
            printf("\n");
    }
    return 0;
}