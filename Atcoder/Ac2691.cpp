#include<cstdio>
#include<iostream>
using namespace std;
int a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    cout<<(min(b,d) - max(a,c) > 0 ? min(b,d) - max(a,c) : 0)<<endl;
    return 0;
}