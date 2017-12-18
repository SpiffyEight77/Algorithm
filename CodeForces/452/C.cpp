#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#define Mod 1000000000 + 7
#define Maxn 100000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}
ll sum,n,ans;
int main()
{
    vector<int> v;
    cin>>n;
    sum = n * (1 + n) / 2;
    //cout<<sum<<endl;
    cout<<((sum % 2 != 0 ? "1" : "0"))<<endl;
    ans = sum / 2;
    for (ll i = n; i >= 1 && ans > 0; i--)
        if(i <= ans)
        {
            v.push_back(i);
            ans -= i;
        }
    cout<<v.size()<<" ";
    for (ll i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}