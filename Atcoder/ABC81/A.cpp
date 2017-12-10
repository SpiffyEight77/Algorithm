#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int n;
string S;
int main()
{
    cin>>S;
    n = 0;
    for (int i = 0; i < S.size(); i++)
        if(S[i] == '1')
            n++;
    cout<<n<<endl;
    return 0;
}