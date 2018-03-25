#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
double h,w,W;
int n;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>h>>w;
        W = (h-100) * 0.9 * 2;
        if(abs(w - W) < W * 0.1)
            cout<<"You are wan mei!"<<endl;
        else
            if(W < w)
                cout<<"You are tai pang le!"<<endl;
        else
            if(W > w)
                cout<<"You are tai shou le!"<<endl;
    }
    return 0;
}