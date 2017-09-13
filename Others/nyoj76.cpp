#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 45
using namespace std;
int dp[N],t,n,i;
int main()
{
    cin>>t;
    dp[1]=0;
    dp[2]=1;
    dp[3]=2;
    while(t--)
    {
        cin>>n;
        for(i=4;i<=n;i++)
         dp[i]=dp[i-1]+dp[i-2];
        cout<<dp[n]<<endl;
    }
    return 0;
}