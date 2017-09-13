#include<cstdio>
#include<iostream>
#include<algorithm>
#define N 1100
using namespace std;
int a[N],dp[N];
int main()
{
    int n,i,j,maxx;
    maxx=1;
    cin>>n;
    for(i=1;i<=n;i++)
     {
        cin>>a[i];
        dp[i]=1;
     }
    for(i=1;i<=n;i++)
     {
         for(j=1;j<i;j++)
          if(a[j]<a[i])
           dp[i]=max(dp[i],dp[j]+1);
           maxx=max(dp[i],maxx);
      }
       cout<<maxx<<endl;
    return 0;
}