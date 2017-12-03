#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
typedef long long ll;
int n,a,b;
int main()
{
    cin>>n>>a>>b;
    if(n * a < b)
        cout<<n*a<<endl;
    else
        cout<<b<<endl;
    return 0;
}