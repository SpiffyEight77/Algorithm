#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 2000100;
string S;
int n,ans,cnt;
int main()
{
    while(cin>>n)
    {
        cin>>S;
        ans = 0;
        cnt = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if(S[i] == '<')
                cnt++;
            else
                break;
        }
        ans += cnt;
        cnt = 0;
        for (int i = S.size() - 1; i >= 0; i--)
        {
            if(S[i] == '>')
                cnt++;
            else
                break;
        }
        ans += cnt;
        cout<<ans<<endl;
    }
    return 0;
}