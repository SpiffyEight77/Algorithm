#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
int x,y;
int main()
{
    cin>>x>>y;
    if(y == 0 || (y == 1 && x != 0) || (x - y + 1 < 0) )
    {
        cout<<"No"<<endl;
        return 0;
    }
    cout<<( (x - y + 1) % 2 ? "No" : "Yes")<<endl;
    return 0;
}