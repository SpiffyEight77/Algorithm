#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int ans,num[10],a[26],A[26];
string s,S;
int main()
{
    ans = 0;
    cin>>s>>S;
    for (int i = 0; i < s.size(); i++)
        if(s[i] >= '0' && s[i] <= '9')
            num[s[i] - '0'] ++;
        else
            if(s[i] >= 'a' && s[i] <= 'z')
                a[s[i] - 'a'] ++;
        else
            if(s[i] >= 'A' && s[i] <= 'Z')
                A[s[i] - 'A'] ++;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i] >= '0' && S[i] <= '9' && num[S[i] - '0'])
        {
            num[S[i] - '0']--;
            ans++;
        }
        if(S[i] >= 'a' && S[i] <= 'z' && a[S[i] - 'a'])
        {
            a[S[i] - 'a']--;
            ans++;
        }
        if(S[i] >= 'A' && S[i] <= 'Z' && A[S[i] - 'A'])
        {
            A[S[i] - 'A']--;
            ans++;
        }
    }
    if(ans == S.size())
        cout<<"Yes "<<s.size() - ans<<endl;
    else
        cout<<"No "<<S.size() - ans<<endl;
    return 0;
}