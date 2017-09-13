#include<cstdio>
#include<iostream>
#define N 60
using namespace std;
int i,j,n,b,e;
long long dp[N];
int main()
{
    cin>>n;
    while(n--)
    {
       cin>>b>>e;
       dp[b+1]=1;
       dp[b+2]=2;
       if(e<=b+2)
       {
           cout<<dp[e]<<endl;
           continue;
       }
       for(i=b+3;i<=e;i++)
        dp[i]=dp[i-1]+dp[i-2];
       cout<<dp[e]<<endl;
    }
    return 0;
}