#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 100010;
int T,n,c,sum,a[M];
int main()
{
    c = 0;
    scanf("%d",&T);
    while(T--)
    {
        sum = 0;
        scanf("%d",&n);
        for (int i = 0 ;i < n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(n == 1)
        {
            printf("Case #%d: 1\n",++c);
            continue;
        }
        sort(a,a+n);
        printf("Case #%d: %d\n",++c,min(sum/2,2*(sum-a[n-1])+1));
    }
    return 0;
}