#include<iostream>
#include<cstdio>
using namespace std;
int x,t;
int main()
{
    cin>>x>>t;
    cout<<(x - t >= 0 ? x - t : 0)<<endl;
    return 0;
}