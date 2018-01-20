#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define Maxn 100000
using namespace std;
int x,hh,mm,ans = 0;
string h,m;
int main()
{
    cin>>x;
    cin>>h>>m;
    hh = (h[0] - '0') * 10 + (h[1] - '0');
    mm = (m[0] - '0') * 10 + (m[1] - '0');
    while( hh % 10 != 7 && mm % 10 != 7)
    {
        mm -= x;
        ans++;
        if(mm < 0)
        {
            mm = 60 + mm;
            hh--;
            if(hh < 0)
                hh = 23;
        }
    }
    cout<<ans<<endl;
    return 0;
}