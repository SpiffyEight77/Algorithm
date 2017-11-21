#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
int a[Maxn],b[Maxn],c[Maxn],n;
long long v,ans;
int main()
{
    cin>>n;
    v = 0;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        v+=a[i];
    }
    for (int i = 0; i < n; i++)
        cin>>b[i];
    sort(b,b+n);
    if(b[n-1] + b[n-2] >= v)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    return 0;
}