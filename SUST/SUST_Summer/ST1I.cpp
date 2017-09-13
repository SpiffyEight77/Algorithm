#include<iostream>
#include<algorithm>
using namespace std;
int n,a[10010];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        //printf("%d",a[n-1]);
        for(int i = n - 1; i >= n/2; i--)
        {
            if(i == n - 1)
                printf("%d",a[i]);
            else
                printf(" %d",a[i]);
            if(i == n/2 && n%2)
                break;
            printf(" %d",a[n - i - 1]);
        }
        printf("\n");
    }
    return 0;
}