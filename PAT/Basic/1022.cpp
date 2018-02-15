#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 1000100
using namespace std;
int a,b,d,k,ans[Maxn];
int main()
{
    cin>>a>>b>>d;
    a = a + b;
    k = 0;
    if(a == 0)
        cout<<a;
    while(a != 0)
    {
        ans[k++] = a % d;
        a/=d;
    }
    for (int i = k - 1; i >= 0; i--)
        cout<<ans[i];
    cout<<endl;
    return 0;
}