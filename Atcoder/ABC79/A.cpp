#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100000;
string s;
int main()
{
    cin>>s;
    if( (s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3]) )
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}