#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,ans,a[11];
int main()
{
    ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(i != j)
                ans+=a[i] * 10 + a[j];
    cout<<ans<<endl;
    return 0;
}