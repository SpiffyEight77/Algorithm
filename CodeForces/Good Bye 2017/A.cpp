#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}
string S;
int ans;
char s[10] = {'a','e','i','o','u'};
bool f;
int main()
{
    cin>>S;
    ans = 0;
    for (int i = 0; i < S.size(); i++)
        for (int j = 0; j < 5; j++)
            if(S[i] == s[j] || (S[i] == '1' || S[i] == '3' || S[i] == '5' || S[i] == '7' || S[i] == '9' )  )
            {
                ans++;
                break;
            }
    cout<<ans<<endl;
    return 0;
}