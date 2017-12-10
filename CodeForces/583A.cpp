#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int n,x,y,v[55],h[55];
int main()
{
    cin>>n;
    for (int i = 1; i <= n * n; i++)
    {
        cin>>x>>y;
        if(!v[y] && !h[x])
        {
            v[y] = 1;
            h[x] = 1;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}