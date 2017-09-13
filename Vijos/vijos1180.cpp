#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
const int MAXN=305;
vector<int> mp[MAXN];
int n,m;
int score[MAXN];
int lch[MAXN],rch[MAXN];
int dp[MAXN][MAXN];
int dfs(int u,int w)
{
   if(u==-1)  return 0;
   if(w<=0)   return 0;
   if(dp[u][w]!=-1) return dp[u][w];
   
}