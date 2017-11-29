#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
double x,y,l,ans;
int main()
{
    cin>>l;
    cin>>x>>y;
    cout<<l/(x+y)*x<<endl;
    return 0;
}