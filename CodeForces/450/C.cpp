#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int x,y;
int main()
{
    cin>>x>>y;
    cout<<min(x,y)<<" "<<( max(x,y) - min(x,y) ) / 2<<endl;
    return 0;
}