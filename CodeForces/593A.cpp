#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
int n,ans,res,l,a[110][30];
char num[110][30];
string S;
bool f;
int main()
{
    cin>>n;
    res = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>S;
        l = 0;
        for (int j = 0; j < S.size(); j++)
        {
            if(a[i][S[j] - 'a'] == 0)
            {
                a[i][S[j] - 'a'] = 1;
                num[i][l++] = S[j];
            }
            else
            {
                if(S[j] == num[i][0])
                    a[i][S[j] - 'a']++;
                else
                    a[i][S[j] - 'a']++;       
            }
        a[i][29] = l;
        // for (int k = 0; k < 30; k++)
        //     cout<<a[i][k]<<" ";
        // cout<<endl;
        }
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 'a'; j <= 'z'; j++)
        {
            ans = 0;
            for (int k = 0; k < n; k++)
            {
                if(a[k][29] == 2)
                {
                    if( (num[k][0] == i && num[k][1] == j) || (num[k][0] == j && num[k][1] == i) )
                    {
                        ans += a[k][num[k][0] - 'a'];
                        ans += a[k][num[k][1] - 'a'];
                    }
                }
                if(a[k][29] == 1)
                {
                    if(num[k][0] == i || num[k][0] == j)
                        ans += a[k][num[k][0] - 'a']; 
                }
            }
            res = max(res,ans);
        }
    }
    cout<<res<<endl;
    return 0;
}