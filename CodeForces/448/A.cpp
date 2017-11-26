#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
int n,minn,ans,a[Maxn];
int main()
{
    cin>>n;
    minn = 9999;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    if(n == 1)
    {
        cout<<a[0]<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        ans = 0;
        for (int j = i; j <= n; j++)
        {    
            ans+=a[j];
            if(abs(360-ans - ans) < minn)
                minn = abs(360-ans - ans);
        }
    }
    cout<<minn<<endl;
    return 0;
}