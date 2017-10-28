#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn = 100000;
int ans,n,k;
int main()
{
    scanf("%d",&n);
    scanf("%d",&k);
    ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if(ans * 2 <= ans + k)
            ans *= 2;
        else
            ans += k;
    }
    printf("%d\n",ans);
    return 0;
}