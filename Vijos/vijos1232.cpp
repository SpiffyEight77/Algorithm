#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 55
using namespace std;
int n,m,i,j;
long long dp[N];
int main()
{
    cin>>n>>m;
    dp[0]=1;
    for(i=1;i<=n;i++)
     if(i<m)
      dp[i]=2*dp[i-1];
     else
      if(i==m)
      dp[i]=2*dp[i-1]-1;
     else
      if(i>m)
      dp[i]=2*dp[i-1]-dp[i-m-1];
    cout<<dp[n]<<endl;
    return 0;
}