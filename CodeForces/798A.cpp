#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
typedef long long ll;
using namespace std;
const int Maxn = 100010;
const int Mod = 1000000000 + 7;
string S;
int cnt;
int main()
{
    cin>>S;
    cnt = 0;
    for (int i = 0; i < S.size()/2; i++)
        if(S[i] != S[S.size() - i - 1])
        {
            cnt++;
            if(cnt > 1)
                break;
        }
    if( (cnt == 0 && S.size() % 2 == 0) || cnt > 1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}