#include<iostream>
#define M 100010
using namespace std;
int T,n,c,ans,Maxans,L,R,p,a[M];
int main()
{
    c = 0;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        Maxans = a[0], ans = a[0], L = 0, R = 0,p = 0;
        for (int i = 1; i < n; i++)
        {
            if(Maxans < 0)
            {
                Maxans = 0;
                p = i;
            }
            Maxans += a[i];
            if(Maxans > ans)
            {
                ans = Maxans;
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