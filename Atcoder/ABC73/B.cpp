#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int n,l,r,ans;
int main()
{
    scanf("%d",&n);
    ans = 0;
    while(n--)
    {
        scanf("%d %d",&l,&r);
        ans+=r-l+1;
    }
    printf("%d\n",ans);
    return 0;
}