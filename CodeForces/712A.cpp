#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100; 
int n,k,ans,a[Maxn],b[Maxn];
int main()
{
    while(cin>>n)
    {
        for (int i = 0; i < n; i++)
            cin>>a[i];
        b[0] = a[n-1];
        for (int i = n - 2,j = 1; i >= 0; i--)
            b[j++] = a[i] + a[i+1];
        cout<<b[n-1];
        for (int i = n - 2; i >= 0; i--)
            cout<<" "<<b[i];
        cout<<endl;  
    }
    return 0;
}