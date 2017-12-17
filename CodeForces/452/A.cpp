#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 200100;
const int Mod = 1000000000 + 7;
int n,x,ans,a[Maxn],b[Maxn];
int main()
{
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x]++;
    }

    ans = 0;

    if(a[1] >= a[2])
        cout<<a[2] + (a[1] - a[2]) / 3<<endl;
    else
        cout<<a[1]<<endl;
    
    return 0;
}