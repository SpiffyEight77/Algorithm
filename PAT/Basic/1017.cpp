#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000
using namespace std;
string s;
int n;
long long t;
bool f;
int main()
{
    t = 0;
    f = false;
    cin>>s>>n;
    for (int i = 0; i < s.size(); i++)
    {
        t = t * 10 + (s[i] - '0');
        if(t < n && f == true)
            cout<<"0";
        else
        if(t >= n)
        {
            cout<<t/n;
            t %= n;
            f = true;
        }
    }
    if(f == false)
        cout<<"0";
    cout<<" "<<t<<endl;
    return 0;
}