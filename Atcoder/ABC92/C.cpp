#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100010
using namespace std;
int n,a[Maxn],x,k;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    x = abs(a[0]);

    for (int i = 1; i < n; i++)
        x = x + abs(a[i] - a[i-1]);

    x+=abs(a[n-1]);

    //cout<<x<<endl;

    for (int i = 0; i < n; i++)
    {
        k = x;
        if(i == 0)
        {
            k = abs(k - abs(a[i]) - abs(a[i+1] - a[i]));
            k += abs(a[i+1]);
        }
        else
        {
            k = abs(k - abs(a[i] - a[i-1]) - abs(a[i+1] - a[i]) );
            k += abs(a[i+1] - a[i-1]);
        }
        cout<<k<<endl;
    }

    return 0;
}