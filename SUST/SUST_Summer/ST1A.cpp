#include<iostream>
#include<cstring>
#include<algorithm>
#define Len 1000100
using namespace std;
int n,a[Len];
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("%d\n",a[(n+1)/2]);
    }
    return 0;
}
