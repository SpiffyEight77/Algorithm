#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 1000000 + 7
using namespace std;
int n,x;
long long a,b;
int main()
{
    cin>>a>>b;
    if( (a * b) % 2 == 0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    return 0;
}