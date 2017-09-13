#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 1010
using namespace std;
char s1[N],s2[N];
int dp[N][N],i,j,n,l1,l2;
int main()
{
    cin>>n;
    while(n--)
    {
        dp[0][0]=0;
        cin>>s1>>s2;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=1;i<=l1;i++)
         for(j=1;j<=l2;j++)
          if(s1[i-1]==s2[j-1])
           dp[i][j]=dp[i-1][j-1]+1;
          else
           dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        cout<<dp[l1][l2]<<endl;
    }
    return 0;
}