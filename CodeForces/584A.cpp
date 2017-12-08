#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
int n,t;
int main()
{
    cin>>n>>t;
    if(t == 10 && n < 2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        printf("%d",t);
        if(t == 10)
            for (int i = 0; i < n - 2; i++)
                cout<<"0";
        else
            for (int i = 0; i < n - 1; i++)
                cout<<"0";
        cout<<endl;
    }
    return 0;
}