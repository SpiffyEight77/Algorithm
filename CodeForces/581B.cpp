#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int n,x,y,p,ans,maxn,a[Maxn],b[Maxn];
int main()
{   
    cin>>n;
    for (int i = 1; i <= n; i++)
        cin>>a[i];

    maxn = a[n];
    b[n] = 0;
    
    for (int i = n - 1; i >= 1; i--)
    {
        if(a[i] < maxn)
            b[i] = maxn - a[i] + 1;
        if(a[i] == maxn)
            b[i] = 1;
        if(a[i] > maxn)
        {
            b[i] = 0;
            maxn = max(maxn,a[i]);
        }
    }
    for (int i = 1; i <= n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}