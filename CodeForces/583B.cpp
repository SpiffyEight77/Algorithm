#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int n,p,cnt,ans,a[Maxn];
bool b[Maxn];
int main()
{   
    memset(b,0,sizeof(b));

    cin>>n;
    
    for (int i = 1; i <= n; i++)
        cin>>a[i];

    cnt = 0;
    ans = 0;
    while(cnt != n)
    {
        
        for (int i = 1; i <= n; i++)
        {   
            if(cnt >= a[i] && b[i] == false)
            {
                cnt++;
                b[i] = true;
            }
        }

        if(cnt != n)
            ans++;

        for (int i = n; i >= 1; i--)
        {   
            if(cnt >= a[i] && b[i] == false)
            {
                cnt++;
                b[i] = true;
            }
        }

        if(cnt != n)
            ans++;
        
    }

    cout<<ans<<endl;
    return 0;
}