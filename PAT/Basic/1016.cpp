#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
string s1,s2;
int ans1,ans2,n,m; 
int main()
{
    ans1 = 0;
    ans2 = 0;
    cin>>s1>>n>>s2>>m;
    for (int i = 0; i < s1.size(); i++)
        if(s1[i] == n + '0')
            ans1 = ans1 * 10 + n;
    for (int i = 0; i < s2.size(); i++)
        if(s2[i] == m + '0')
            ans2 = ans2 * 10 + m;
    cout<<ans1 + ans2<<endl;
    return 0;
}