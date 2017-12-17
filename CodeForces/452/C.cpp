#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
const int Mod = 1000000000 + 7;
int n,x,ans,sum,cnt,a[Maxn],b[Maxn];
bool vis[Maxn],f=false;
void dfs(int cnt,int ans,int x)
{
    if(f)
        return ;
    if(cnt == n/2  && ans == 0)
    {
        for (int i = 0; i < cnt; i++)
            cout<<b[i]<<" ";
        f = true;
        return ;
    }

        if(!vis[x] && ans - x >= 0)
        {
            ans-=x;
            b[cnt++] = x;
            vis[x] = true;
            dfs(cnt,ans,ans);
            if(f)
                return ;
            vis[x] = false;
            b[cnt--] = 0;
            ans+=x;
        }

    if(f)
        return ;

    return ;
}
int main()
{
    cin>>n;

    memset(vis,0,sizeof(vis));

    sum = 0;
    cnt = 0;
    ans = 0;

    for (int i = 1; i <= n; i++)
        sum+=i;
    
    cout<<sum%2<<endl;

    cout<<n/2<<" ";

    ans = sum/2;

    cout<<n<<" ";

    

    while(ans)
    {
        if(vis[])
    }

    // for (int i = n; i >= 1; i--)
    // {
    //     dfs(cnt,sum/2,i);
    // }

    // if(n%2!=0)
    // {
    //     cout<<n/2+1<<" ";
    //     ans = 0;
        
    // }
    // else
    // {
    //     cout<<n/2<<" ";
    //     for (int i = 1; i <= n/2; i++)
    //         cout<<i<<" ";
    // }


    
    cout<<endl;

    return 0;
}