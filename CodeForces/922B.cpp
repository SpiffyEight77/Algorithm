#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
int n,ans,c;
int main()
{
    ans = 0;
    cin>>n;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            c = i^j;
            if(c > j && c <= n && i + j > c &&  i - j < c)
                ans++;
        }
    cout<<ans<<endl;
    return 0;
}