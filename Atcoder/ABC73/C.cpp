#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
const int M = 100010;
int n,x,ans,a[M];
int main()
{
    scanf("%d",&n);
    ans = n;
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for (int i = 0; i < n; i++)
        if(a[i] == a[i+1] && a[i] != 0 && a[i+1] != 0)
        {
            ans-=2;
            a[i] = a[i+1] = 0;
        }
    printf("%d\n",ans);
    return 0;
}