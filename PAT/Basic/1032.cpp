#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,x,s,p,ans = 0,a[Maxn] = {0};
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>s;
        a[x]+=s;
        if(a[x] > ans)
            ans = a[x],p = x;
    }
    cout<<p<<" "<<ans<<endl;
    return 0;
}