#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,x,a[Maxn];
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x]++;
    }
    for (int i = 1; i <= 1e5; i++)
        if(a[i] % 2 == 1)
        {
            cout<<"Conan"<<endl;
            return 0;
        }
    cout<<"Agasa"<<endl;
    return 0;
}