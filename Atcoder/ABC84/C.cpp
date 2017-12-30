#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
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
ll n,ans,c[Maxn],s[Maxn],f[Maxn];
int main()
{
    cin>>n;
    for (int i = 1; i < n; i++)
        cin>>c[i]>>s[i]>>f[i];
    
    for (int i = 1; i < n; i++)
    {
        ans = c[i] + s[i];
        for (int j = i + 1; j < n; j++)
        {
            if( ans < s[j])
            {
                ans = c[j] + s[j];
            }
            else
                if( ans % f[j] != 0)
                {
                    ans = ( ans / f[j] + 1 ) * f[j]  + c[j];
                }
            else
            {
                ans += c[j];
            }
        }
        cout<<ans<<endl;
    }
    cout<<"0"<<endl;
    return 0;
}