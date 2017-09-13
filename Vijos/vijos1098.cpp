#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 25
using namespace std;
int n,i,j,mx,maxx,a[N],dp[N];
int main()
{
      cin>>n;
      //memset(dp,0,sizeof(dp));
      dp[1]=1;
      maxx=0;
      for(i=1;i<=n;i++)
       cin>>a[i];
      for(i=2;i<=n;i++)
      {
         dp[i]=1;
         for(j=1;j<i;j++)
             if(a[j]>=a[i] && dp[i]<dp[j]+1)
                     dp[i]=dp[j]+1;
         cout<<dp[i]<<endl;
         if(dp[i]>maxx)
              maxx=dp[i];
     }
    cout<<maxx<<endl;
    return 0;
}