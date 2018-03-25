#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
int n,k,d,x,a,ans = 0;
int main()
{
    cin>>n;
    cin>>d>>x;
    while(n--)
    {
        cin>>a;
        k = 0;
        for (int i = 1; i <= d; i+=a)
            k++;
        ans += k;
    }
    cout<<ans+x<<endl;
    return 0;
}