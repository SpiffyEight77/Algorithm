#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
long long g,gp,s,sp,k,kp;
long long a,b;
int main()
{
    scanf("%lld.%lld.%lld",&g,&s,&k);
    scanf("%lld.%lld.%lld",&gp,&sp,&kp);
   
    a = (g * 17 + s) * 29 + k;
    b = (gp * 17 + sp) * 29 + kp;
    b -= a; 
    if(b < 0)
        cout<<"-";
    printf("%lld.%lld.%lld\n",abs(b)/29/17,abs(b)/29%17,abs(b)%29);
    return 0;
}