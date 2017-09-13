#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N
using namespace std;
int t,i,j,x,n,mx,maxx;
int dp[],x1[],x2[];
int main()
{
   cin>>t;
   while(t--)
   {
       maxx=0;
       memset(dp,0,sizeof(dp));
       cin>>n>>x>>mx;
       for(i=1;i<=n;i++)
            cin>>x1[i]>>x2[i]>>h[i];
       //if(x<=x2[1] && x>=x1[1])
        //dp[0]+=mx-h[1];
        dp[0]=mx;
       for(i=1;i<=n;i++)
       {
           if(x<=x2[1] && x>=x1[1])
             {
                 if(dp[i-1]+x-x1[i]>dp[i-1]+x2[i]-x)
                   {
                       dp[i]+=dp[i-1]+x2[i]-x;
                       x=x2[i];
                   }
                 else
                 {
                       dp[i]+=dp[i-1]+x-x1[i];
                       x=x1[i];
                 }
             }
       }
       for(i=0;i<=nli++)
        if(maxx<dp[i])
         maxx=dp[i];
       cout<<maxx<<endl;
   }
    return 0;
}