#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
const int ans = 17;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if( (a+b+c) % ans == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}