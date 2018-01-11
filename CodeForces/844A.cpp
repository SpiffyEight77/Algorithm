#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
using ll = long long;
using ld = long double;
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

string s;
int n,c,ans,a[Maxn];
int main()
{
    cin>>s;
    cin>>n;
    c = 0;
    memset(a,0,sizeof(a));
    for (int i = 0; i < s.size(); i++)
        if(a[s[i] - 'a'] == 0)
        {
            c++;
            a[s[i] - 'a'] ++;
        }
    if(s.size() < n)
        cout<<"impossible"<<endl;
    else
        if(c >= n)
            cout<<"0"<<endl;
    else
        cout<<abs(c-n)<<endl;
    return 0;
}