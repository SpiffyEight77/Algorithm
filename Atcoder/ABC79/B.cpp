#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100000;
long long L[100];
int n;
int main()
{
    cin>>n;
    L[0] = 2;
    L[1] = 1;
    for (int i = 2; i <= n; i++)
        L[i] = L[i-1] + L[i-2];
    cout<<L[n]<<endl;
    return 0;
}