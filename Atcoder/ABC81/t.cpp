#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 200100;
const int Mod = 1000000000 + 7;
struct num
{
    int num;
    int cnt;
}a[Maxn];
int n,k,x,ans,cnt,m[Maxn];
int main()
{
    cin>>n>>k;
    cnt = 0;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(m[x] == 0)
            cnt++;
        m[x]++;
    }

    if(cnt <= k)
    {
        cout<<"0"<<endl;
        return 0;
    }

    sort(m,m+Maxn);
    // cout<<cnt<<endl;
    // cout<<k<<endl;
    // for (int i = 0; i <= n; i++)
    //     cout<<m[i]<<" ";
    // cout<<endl;
    for (int i = 0; i <= Maxn; i++)
    {
        if(cnt == k)
            break;
        else
            if(m[i] > 0 && k < cnt)
            {
                ans+=m[i];
                cnt--;
            }
    }
    // cout<<cnt<<endl;
    // cout<<k<<endl;
    cout<<ans<<endl;

    return 0;
}