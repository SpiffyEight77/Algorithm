#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string S;
int ans;
int main()
{
    while(cin>>S)
    {
        ans = 0;
        for (int i = 1; i < S.size(); i++)
            ans += min( 26 - abs(S[i-1] - S[i]) , abs(S[i-1] - S[i]));
        ans += min( 26 - abs('a' - S[0]) , abs('a' - S[0]));
        cout<<ans<<endl;
    }
    return 0;
}