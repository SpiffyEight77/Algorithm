#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
int n,ans,a[110];
int main()
{
    cin>>n;
    ans = 0;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        if(a[i] == 0 && a[i+1] == 1 && i != 0 && a[i-1] != 0) 
            ans++;
        else
            if(a[i] == 1)
                ans++;
    cout<<ans<<endl;
    return 0;
}