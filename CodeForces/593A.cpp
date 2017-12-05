#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
int n,ans,res,l,a[110][30];
char s[110][1010];
bool f;
int main()
{
    cin>>n;
    getchar();
    memset(a,0,sizeof(a));
    memset(s,0,sizeof(s));
    res = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s",s[i]);
        s[i][1009] = strlen(s[i]);
        for (int j = 0; j < s[i][1009]; j++)
            if(a[i][s[i][j] - 'a'] == 0)
            {
                a[i][s[i][j] - 'a'] = 1;
                a[i][29] ++;
            }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i][29] > 2)
            continue;
        ans = s[i][1009];
        for (int j = i + 1; j < n; j++)
        {
            f = true;
            l = 0;
            if(a[j][29] > 2)
                continue;
            for (int k = 0; k < 26; k++)
            {
                if(a[j][k] == 1 && a[i][k] != 1)
                {
                    l++;
                    if(a[i][29] + l > 2)
                    {
                        f = false;
                        a[i][a[j][k] - 'a'] = 1;
                        break;
                    }
                }
            }
            // if(a[i][29] + l == 2 && l != 0)
            // {
            //     res = max(ans+s[j][1009],res);
            //     continue;
            // }
                ans += s[j][1009];
        }
        res = max(ans,res);
    }
    cout<<res<<endl;
    return 0;
}