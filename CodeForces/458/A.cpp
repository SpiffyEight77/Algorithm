#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 1000000 + 7
using namespace std;
int n,x,a[Maxn];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    sort(a,a+n);
    for (int i = n - 1; i >= 0; i--)
    {
        x = sqrt(a[i]);
        if(x * x != a[i])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    return 0;
}