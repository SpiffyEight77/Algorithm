#include<cstdio>
#include<iostream>
#include<algorithm>
#define Maxn 100010
using namespace std;
int n,x,a[Maxn] = {0};
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x]++;
        a[x+1]++;
        a[x-1]++;
    }
    sort(a,a+Maxn);
    cout<<a[Maxn-1]<<endl;
    return 0;
}