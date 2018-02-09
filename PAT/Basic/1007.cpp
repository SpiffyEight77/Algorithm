#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100000
using namespace std;
int n,ans;
bool isprime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
            return false;
    return true;
}
int main()
{
    cin>>n;
    ans = 0;
    for (int i = 3; i <= n - 2; i++)
        if(isprime(i) && isprime(i+2))
            ans++;
    cout<<ans<<endl;
    return 0;
}