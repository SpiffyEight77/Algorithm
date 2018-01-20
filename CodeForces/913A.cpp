#include<iostream>
#include<cstdio>
using namespace std;
long long n,m;
int main()
{
    cin>>n>>m;
    cout<<( n > 31 ? m : m % (1 << n) )<<endl;
    return 0;
}