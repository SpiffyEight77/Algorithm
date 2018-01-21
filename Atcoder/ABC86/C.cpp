#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 1000000 + 7
using namespace std;
int n,step,tt,a[Maxn],x[Maxn],y[Maxn],t[Maxn];
bool f = true;
int main()
{
    cin>>n;
    x[0] = 0; y[0] = 0; t[0] = 0;
    for (int i = 1; i <= n; i++)
        cin>>t[i]>>x[i]>>y[i];
    for (int i = 1; i <= n; i++)
    {
        step = abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
        tt = t[i] - t[i-1];
        if(step == 0 && tt % 2 != 0)
        {
            f = false;
            break;
        }
        if(step > tt)
        {
            f = false;
            break;
        }
        if(tt % step != 0)
        {
            f = false;
            break;
        }
    }
    // cout<<t[1]<<x[0]<<y[0]<<tt<<endl;
    if(f == true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}