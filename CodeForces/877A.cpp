#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
string S;
bool f;
int ans;
int main()
{
    cin>>S;
    f = false;
    ans = 0;
    for (int i = 0; i < S.size(); i++)
        if(S[i] == 'D' && S[i+1] == 'a' && S[i+2] == 'n' && S[i+3] == 'i' && S[i+4] == 'l')
            ans++;
        else
            if(S[i] == 'O' && S[i+1] == 'l' && S[i+2] == 'y' && S[i+3] == 'a')
                ans++;
        else
            if(S[i] == 'S' && S[i+1] == 'l' && S[i+2] == 'a' && S[i+3] == 'v' && S[i+4] == 'a')
                ans++;
        else
            if(S[i] == 'A' && S[i+1] == 'n' && S[i+2] == 'n')
                ans++;
        else
            if(S[i] == 'N' && S[i+1] == 'i' && S[i+2] == 'k' && S[i+3] == 'i' && S[i+4] == 't' && S[i+5] == 'a')
                ans++;
        if(ans == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}