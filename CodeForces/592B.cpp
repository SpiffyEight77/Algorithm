#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
ll n;
int main()
{
    cin>>n;
    if(n == 3)
        cout<<"1"<<endl;
    else
        cout<<(n-2)*(n-2)<<endl;
    return 0;
}