#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 1100
using namespace std;
char s1[N],s2[N];
int dp[N][N],i,j,l1,l2;
int main()
{
    while(cin>>s1>>s2)
    {
        memset(dp,0,sizeof(dp));
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=1;i<=l1;i++)
         for(j=1;j<=l2;j++)
          if(s1[i-1]==s2[j-1])
           dp[i][j]=dp[i-1][j-1]+1;
          else
           dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        cout<<dp[l1][l2]<<endl;
    }
    return 0;
}