#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
typedef long double ld;
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
bool f;
int p;
int main()
{
    f = true;
    cin>>S;
    for (int i = S.size()-1; i >= 0; i--)
        if(S[i] != '0')
        {
            p = i;
            break;
        }
    for (int i = 0; i < (p+1)/2; i++)
        if(S[i] != S[p-i])
        {
            f = false;
            break;
        }
    cout<<(f == true ? "YES" : "NO")<<endl;
    return 0;
}