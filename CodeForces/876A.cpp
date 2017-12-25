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

int n,a,b,c,p,ans,k,t;

int main()
{
    cin>>n;
    cin>>a>>b>>c;

    ans = 0;
    
    t = 1;

    for (int i = 2; i <= n; i++)
    {
        if(t == 1)
        {
            if(a < b)   k = a, p = 2;
            else    k = b, p = 3;
        }

        if(t == 2)
        {
            if(a < c)   k = a, p = 1;
            else    k = c, p = 3;
        }

        if(t == 3)
        {
            if(b < c)   k = b, p = 1;
            else    k = c, p = 2;
        }

        ans += k;
        t = p;
    }
    

    cout<<ans<<endl;
    return 0;
}