#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn = 100100;
int n,ans,s[maxn],d[maxn];
int main()
{
    cin>>n;
    ans = 0;
    for (int i = 0; i < n; i++)
        cin>>s[i]>>d[i];
    for (int i = 0; i < n; i++)
        if(s[i] > ans)
            ans = s[i];
        else
        {
            while(ans >= s[i])
                s[i] += d[i];
            ans = s[i];
        }
    cout<<ans<<endl;
    return 0;
}