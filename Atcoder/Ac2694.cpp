#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int x,a,b;
int main()
{
    cin>>x>>a>>b;
    cout<<(abs(x - a) > abs(x - b) ? "B" : "A" )<<endl;
    return 0;
}