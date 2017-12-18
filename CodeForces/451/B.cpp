#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
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
ll n,a,b;
int main()
{
    cin>>n>>a>>b;
    for (ll i = 0; i <= n; i++)
    {
        if((n - i * a) < 0)
            break;
        if( (n - i * a) % b == 0)
        {
            cout<<"YES"<<endl<<i<<" "<<(n - i * a) / b<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}