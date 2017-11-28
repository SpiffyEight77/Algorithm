#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
int n,m,c,x,y;
int main()
{
    cin>>n;
    m = 0;
    c = 0;
    while(n--)
    {
        cin>>x>>y;
        if(x < y)
            c++;
        else
            if(x > y)
                m++;
    }
    if(m > c)
        cout<<"Mishka"<<endl;
    else
        if(m < c)
            cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}