#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000 + 100;
const int Mod = 1000000000 + 7;
int n,l,cnt,ans,a[Maxn];
string S;
bool f = false;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    sort(a,a+n);
    cnt = 1;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != a[i+1])
        {
            if(cnt > a[i])
                ans += abs(a[i] - cnt);
            else
                if(cnt < a[i])
                    ans += cnt;
            cnt = 1;
        }
        else
            cnt++;
    }
    cout<<ans<<endl;
    return 0;
}