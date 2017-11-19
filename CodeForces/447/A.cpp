#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
string S;
int ans;
int main()
{
    cin>>S;
    ans = 0;
    for (int i = 0; i < S.size(); i++)
        if(S[i] == 'Q')
            for (int j = i + 1; j < S.size(); j++)
                if(S[j] == 'A')
                    for (int k = j + 1; k < S.size(); k++)
                        if(S[k] == 'Q')
                            ans++;
    cout<<ans<<endl;
    return 0;
}