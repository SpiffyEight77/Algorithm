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
int n,m,x,y,p,a[Maxn],b[Maxn],vis[110];
bool f;
int main()
{
    cin>>n>>m;

    for (int i = 0; i < n; i++)
        cin>>a[i]>>b[i];
    
    p = 0;

    for (int i = 0; i < n; i++)
    {

        if(b[i] == m)
        {
            cout<<"YES"<<endl;
            return 0;
        }

        if(a[i+1] > b[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    return 0;
}
