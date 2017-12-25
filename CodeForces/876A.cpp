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

int n,a,b,c,t,ans;

int main()
{
    cin>>n;
    cin>>a>>b>>c;

    if(n == 1)
    {
        cout<<"0"<<endl;
        return 0;
    }

    ans = 0;
    if(a + b == c)
        t = min(a,b);
    else
        t = min(a,b) + c;   

    

    cout<<ans<<endl;
    return 0;
}

a b c
a c b
b a c
b c a
c a b
c b a