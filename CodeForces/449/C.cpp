#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 1000100000;
int k,p,n,m,l,res,a[10];
long long ans;
bool f;
int main()
{
    ans = 11;
    cin>>k>>p;
    for (int i = 2; i <= k; i++)
    {
        n = i * 11;
        res = n;
        l = 0;
        while(n)
        {
            n/=10;
            l++;
        }
        // cout<<res<<endl;
        // cout<<l<<endl;
        // cout<<(int)(res/pow(10,l-1))<<res%10<<endl;
        if(l%2!=0 || (int)(res/pow(10,l-1)) != res % 10)
            continue;
        // cout<<res<<endl;
        ans = ans + res % p;
    }
    cout<<ans%p<<endl;
    return 0;
}