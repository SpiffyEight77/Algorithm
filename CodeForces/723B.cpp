#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int n,cnt1,cnt2,l,ans;
bool start,end,f;
string S;
int main()
{
    while(cin>>n)
    {
        getchar();
        cin>>S;
        ans = 0;
        l = 0;
        cnt1 = 0;
        cnt2 = 0;
        f  = false;
        for (int i = 0; i < n; i++)
        {
            if(f == false)
            {
                if( ('A' <= S[i] && S[i] <= 'Z') || ('a' <= S[i] && S[i] <= 'z') )
                {
                    l++;
                    ans = max(ans,l);
                }
                else
                    if(S[i] == '_')
                        l = 0;
                else
                    if(S[i] == '(')
                    {
                        l = 0;
                        f = true;
                }
            }
            else
                if(f == true)
                {
                    if(S[i] == '_' && S[i-1] != '_' && S[i-1] != '(')
                    {
                        cnt1++;
                    }
                    else
                        if(S[i] == ')' && S[i-1] != '_' && S[i-1] != '(' && S[i-1] != ')')
                        {
                            cnt1++;
                        }
                    if(S[i] == ')')
                        f = false;
                }
        }
        cout<<ans<<" "<<cnt1<<endl;
    }
    return 0;
}