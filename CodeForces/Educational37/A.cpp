#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define Maxn 100001
using namespace std;
int t = 1,n,k,x,ans,cnt,b[Maxn],tap[Maxn];
int main()
{
    cin>>t;
    while(t--)
    {
        memset(tap,0,sizeof(tap));
        memset(b,0,sizeof(b));
        cnt = 0;
        ans = 1;
        cin>>n>>k;
        for (int i = 1; i <= k; i++)
        {
            cin>>x;
            tap[x] = 1;
            b[x] = 1;
            cnt++;
        }
        if(cnt == n)
            ans = 1;
        else
           for (int i = 2; i <= n; i++)
           {
                bool   f = true;
            for (int j = 1; j <= n; j++)
            { 
                if(tap[j] != 0)
                {
                    b[j+1] = 1;
                    b[j-1] = 1;
                }
            }
            for (int k = 1; k <= n; k++)
                if(b[k] == 0)
                {
                    f = false;
                    break;
                }
            
            for (int k = 1; k <= n; k++)
                if(b[k])
                    tap[k] = 1;
            
            if(f == true)
            {
                ans = i;
                break;
            }
           }
        cout<<ans<<endl;
    }
    return 0;
}