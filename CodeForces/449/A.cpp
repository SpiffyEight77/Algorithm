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
    ans = 0;
    res = 0;
    cin>>k>>p;
    for (int i = 11; i <= Maxn; i+=11)
    {
        n = i;
        l = 0;
        f = true;
        while(n!=0)
        {
            a[l++] = n % 10;
            n/=10;
        }
        if(l%2!=0)
            continue;
        for (int j = 0; j < l/2; j++)
            if(a[j] != a[l-j-1])
            {
                f = false;
                break;
            }
        if(f)
        {
            ans = ans + i % p;
            res++;
        }
        if(res == k)
        {
            cout<<ans%p<<endl;
            break;
        }
    }
    return 0;
}