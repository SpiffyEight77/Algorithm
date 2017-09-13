#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 2010
using namespace std;
char s[N][80];
int n,i,j,l,mx,dp[N];
bool ok(int x,int y)
{
   l=strlen(s[x]);
   for(int k=0;k<l;k++)
    if(s[x][k]!=s[y][k])
     return false;
   return true;
}
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
      {
          cin>>s[i];
          dp[i]=1;
      }
    mx=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
         if(ok(i,j))
           dp[j]=max(dp[i],dp[j]+1);
    }
    for(i=1;i<=n;i++)
      if(dp[i]>mx)
        mx=dp[i];
    cout<<mx<<endl;
    return 0;
}