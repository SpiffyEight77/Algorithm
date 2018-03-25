#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
int a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    cout<<min(a,b)+min(c,d)<<endl;
    return 0;
}