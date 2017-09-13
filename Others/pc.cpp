#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int p[205],h[205],c[205],dp[205];
int i,j,k,t,n,m;
int main()
{
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        cin>>n>>m;
        for(i=1;i<=m;i++)
         cin>>p[i]>>h[i]>>c[i];
        for(i=1;i<=m;i++)
         for(j=1;j<=c[i];j++)
          for(k=n;k>=p[i];k--)
           dp[k]=max(dp[k],dp[k-p[i]]+h[i]);
        cout<<dp[n]<<endl;
    }
    return 0;
}