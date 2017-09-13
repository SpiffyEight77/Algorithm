#include<cstdio>
#include<iostream>
#include<algorithm>
#define N 110
using namespace std;

int a[N][N],dp[N],i,j,n,maxx;
int main()
{
    cin>>n;
    maxx=0;
    for(i=1;i<=n;i++)
     for(j=1;j<=i;j++)
      cin>>a[i][j];
    for(i=1;i<=n;i++)
          dp[i]=a[n][i];
    for(i=n-1;i>=1;i--)
     for(j=1;j<=i;j++)
          {
              dp[j]=max(dp[j],dp[j+1])+a[i][j];
              if(dp[j]>maxx)
               maxx=dp[j];
          }
    cout<<maxx<<endl;
    return 0;
}