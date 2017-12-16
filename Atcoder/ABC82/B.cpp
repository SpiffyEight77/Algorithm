#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000 + 100;
const int Mod = 1000000000 + 7;
int n,l,a[Maxn];
char s[Maxn],t[Maxn];
bool f = false;
bool cmp(char x,char y)
{
    return x < y;
}

bool cmp2(char x,char y)
{
    return x > y;
}
int main()
{
    cin>>s;
    getchar();
    cin>>t;
    l = strlen(s);
    sort(s,s+l,cmp);

    l = strlen(t);
    sort(t,t+l,cmp2);

    if(strcmp(s,t) < 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}