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
int n,m,x,y,p,a,b;
bool f;
int main()
{
    cin>>n>>m>>x>>y;

    if(y == m && x == 0)
    {
        cout<<"YES"<<endl;
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        cin>>a>>b;
        
        if(a <= y)
            y = max(b,y);
        
        if(y == m)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}