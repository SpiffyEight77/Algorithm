#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n,cnt,ans;
char s;
int main()
{
    cin>>n>>s;
    ans = 0;
    cnt = 0;
    for (int i = 1; ; i+=2)
    {
        if( (ans  + i) * 2 - 1 > n)
            break;
        ans += i;
        cnt++;
    }

    for (int i = cnt; i >= 1; i--)
    {
        for (int j = 1; j <= (cnt - i); j++)
            cout<<" ";
        for (int j = 1; j <= i * 2 - 1; j++)
            cout<<s;
        cout<<endl;
    }

    for (int i = 2; i <= cnt; i++)
    {
        for (int j = 1; j <= (cnt - i); j++)
            cout<<" ";
        for (int j = 1; j <= i * 2 - 1; j++)
            cout<<s;
        cout<<endl;
    }
    
    cout<<n - ans * 2 + 1<<endl;
    return 0;
}