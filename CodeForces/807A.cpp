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
int n,a[Maxn],b[Maxn],f;
int main()
{
    cin>>n;
    f = -1;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
        if(b[i] != a[i])
            f = 1;
    }
    if(f != 1)
        for (int i = 0; i < n; i++)
            if(b[i] < b[i+1])
            {
                f = 0;
                break;
            }
            
    if(f == 1)
        cout<<"rated"<<endl;
    else
        if(f == 0)
            cout<<"unrated"<<endl;
    else
        cout<<"maybe"<<endl;
    return 0;
}