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

ll n,k,ans;
int main()
{
    cin>>n>>k;
    
    ans = n / k;
    //cout<<ans;
    cout<<(ans % 2 == 0 ? "NO":"YES")<<endl;

    return 0;
}