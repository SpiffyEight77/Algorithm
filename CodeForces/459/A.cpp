#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define Maxn 100001
using namespace std;
int n;
long long x,y;
int main()
{
    cin>>n;
    y = 2; x = 1;
    for (int i = 1; i <= n; i++)
    {
        if(i == 1 || i == 2)
            cout<<"O";
        else
        if(i == x + y)
        {
            cout<<"O";
            x = y;
            y = i;
        }
        else
            cout<<"o";
    }
    cout<<endl;
    return 0;
}