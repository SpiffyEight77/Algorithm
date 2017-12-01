#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
long long a[Maxn],ans,n,k;
int main()
{
    scanf("%lld",&n);
    ans = 1;
    for (long long i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ans *= i;
            while(n % i == 0)
                n/=i;
        }
    }
    if(n!=1)
        ans *= n;
    printf("%lld\n",ans);
    return 0;
}