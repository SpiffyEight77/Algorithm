#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
struct stu
{
    string num;
    int exam;
}s[1100],x;
int k,m,n,y;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x.num>>y>>x.exam;
        s[y] = x;
    }
    cin>>m;
    while(m--)
    {
        cin>>k;
        cout<<s[k].num<<" "<<s[k].exam<<endl;
    }
    return 0;
}