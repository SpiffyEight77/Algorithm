#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
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

    if(a[2] >= a[1] && a[2] != 0 && a[1] != 0) 
    {
        ans += a[1];     
        a[1] = 0;
    }
    else
        if(a[2] <= a[1] && a[2] != 0 && a[1] != 0)
        {
            ans += a[2];
            a[1] = a[2] - a[1];
        }


    if(a[1] % 3 == 0 && a[1] != 0)
        ans+=a[1]/3;
    
    cout<<ans<<endl;
    return 0;
}