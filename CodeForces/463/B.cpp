#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 2000100
using namespace std;
int Q,l,r,k,ans,n,cnt;
int main()
{
    cin>>Q;
    while(Q--)
    {
        cnt = 0;
        n = 0;
        ans = 1;
        cin>>l>>r>>k;
        for (int i = l; i <= r; i++)
        {
            n = i;
            while(1)
            {
                if(n % 10 != 0)
                    ans = n % 10 * ans;
                n/=10;
                if(n == 0 && ans < 10)
                    break;
                else
                if(n == 0 && ans >= 10)
                {
                    n = ans;
                    ans = 1;
                }
            }
            if(ans == k)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}