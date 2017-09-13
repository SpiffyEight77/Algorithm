#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long n,m,maxn,minn;
int main()
{
    while(scanf("%lld%lld",&n,&m)!=EOF)
    {
        maxn = 0; minn = 0;
        maxn = (n-m + 1) * (n-m) /2;
        if(n%m == 0)
            minn = n*(n/m-1)/2;
        else
            minn = (m-n%m) * (n/m) * (n/m-1)/2 + (n%m) * (n/m + 1) * (n/m) / 2;
        printf("%lld %lld\n",minn,maxn);
    }
    return 0;
}