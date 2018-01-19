#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define Maxn 100000
using namespace std;
int n,k,cnt,x;
double sum;
int main()
{
    cin>>n>>k;
    sum = 0; cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum+=x;
    }

    while(round( sum / (n+cnt) ) < k )
    {
        sum+=k;
        cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}