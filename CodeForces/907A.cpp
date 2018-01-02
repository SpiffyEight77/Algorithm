#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
using ll = long long;
using ld = long double;
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
int v1,v2,v3,vm;
int main()
{
    cin>>v1>>v2>>v3>>vm;
    if(vm > v3 * 2 || vm >= v2 || vm * 2 < v3)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<2 * v1<<endl<<2 * v2<<endl<<2 * min(v3,vm)<<endl;
    return 0;
}