#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
typedef long long ll;
int f[110][20],p[110][20],ans,cnt,res,n;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 10; j++)
            cin>>f[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= 10; j++)
            cin>>p[i][j];
    res = -(1<<30);
    for (int k = 1; k < 1024; k++)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            cnt = 0;
            for (int j = 0; j < 10; j++)
            {
                if(k>>j&1 && f[i][j]) // 右移与1运算求改数二进制有多少个1
                    cnt++;
            }
            ans += p[i][cnt];
        }
        if(ans > res)
            res = ans;
    }
    cout<<res<<endl;
    return 0;
}