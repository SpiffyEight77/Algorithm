#include<iostream>
#include<algorithm>
using namespace std;
int n,a[110],b[110];
int main()
{
    while(scanf("%d",&n) && n)
    {
        a[0] = 0; b[0] = 0;
        for(int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        for(int i = 1; i <= n; i++)
            scanf("%d",&b[i]);
        sort(a+1,a+1+n);
        sort(b+1,b+1+n);
        for(int i = 1; i <= n; i++)
            if(a[i] > b[i])
                a[0] += 2;
            else
                if(a[i] < b[i])
                    b[0] += 2;
            else
                a[0] += 1,b[0] += 1;
        printf("%d vs %d\n",a[0],b[0]);
    }
    return 0;
}