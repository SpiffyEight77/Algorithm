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
int n,k,x,ans,cnt,mark[Maxn];
bool cmp(num x,num y)
{
    return x.cnt < y.cnt;
}
int main()
{
    cin>>n>>k;
    cnt = 0;
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(a[x].num == 0)
        {
            a[x].num = x;
            cnt++;
        }
        a[x].cnt++;
    }

    if(cnt <= k)
    {
        cout<<"0"<<endl;
        return 0;
    }

    sort(a,a+Maxn,cmp);

    for (int i = 0; i < Maxn; i++)
    {
        if(a[i].cnt != 0 && a[i].num != 0 && a[i].cnt <= k)
        {
            ans+=a[i].cnt;
            k-=a[i].cnt;
        }
    }

    // for (int i = 0; i < Maxn; i++)
    //     if(a[i].num!=0)
    //         cout<<a[i].num<<" ";
    // cout<<endl;

    // for (int i = 0; i < Maxn; i++)
    //     if(a[i].cnt != 0)
    //         cout<<a[i].cnt<<" ";
    // cout<<endl;

    cout<<ans<<endl;

    return 0;
}