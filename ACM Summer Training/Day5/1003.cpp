#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1000010
#define N 2110
using namespace std;
const int inf = 0x3f3f3f3f;
int n,m,x,y,a[N],b[11],k[M],p[N];
bool f;
long long dp[M][20];
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        f = false; 
        for (int i = 0; i < n; i++)
            scanf("%d%d",&a[i],&b[i]);
        for (int i = 0; i < m; i++)
            scanf("%d%d",&k[i],&p[i]);
            
    }
    return 0;
}