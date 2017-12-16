#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000 + 100;
const int Mod = 1000000000 + 7;
int n,l,a[Maxn];
string S;
int x,y;
bool f = false;
int main()
{
    cin>>x>>y;
    if( (x+y) % 2 == 0 )
        cout<<(x+y)/2<<endl;
    else
        cout<<(x+y)/2+1<<endl;
    return 0;
}