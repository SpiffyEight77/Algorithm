#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,k,x,a[Maxn] = {0},b[Maxn];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x]++;
    }
    cin>>k;
    while(k--)
    {
        cin>>x;
        cout<<a[x];
        if(k != 0)
            cout<<" ";
    }
    cout<<endl;
    return 0;
}