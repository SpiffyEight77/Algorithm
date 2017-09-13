#include<cstdio>
#include<iostream>
#define N 60
using namespace std;
int dp[N],n,i;
int main()
{
    dp[1]=1,dp[2]=2,dp[3]=3,dp[4]=4; 
    while(cin>>n)
    {
        if(!n)
         break;
        if(n<=4)
         {
             cout<<dp[n]<<endl;
             continue;
         }
          for(i=5;i<=n;i++)
             dp[i]=dp[i-1]+dp[i-3];
        cout<<dp[n]<<endl;
    }
    return 0;
}
