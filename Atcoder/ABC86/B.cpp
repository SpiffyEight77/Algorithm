#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 1000000 + 7
using namespace std;
string a,b;
int x = 0;
int main()
{
    cin>>a>>b;
    a = a + b;
    for (int i = 0; i < a.size(); i++)
    {
        x = x + pow(10,a.size() - i) * (a[i] - '0');
    }
    x/=10;
    int k = sqrt(x);
    if(k * k == x)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}