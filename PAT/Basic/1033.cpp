#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
string s,ss;
int k = 0,num[11],a[27],A[27];
char c[6];
bool f = false;
int main()
{
    cin>>s>>ss;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
            num[s[i] - '0'] = 1;
        if(s[i] >= 'A' && s[i] <= 'Z')
            a[s[i] - 'A'] = 1,A[s[i] - 'A'] = 1;
        if(s[i] == '+')
            f = true;
        if(s[i] == '_' || s[i] == ',' || s[i] == '.' || s[i] == '-')
            c[k++] = s[i];
    }
    
    for (int i = 0; i < ss.size(); i++)
    {
        if(ss[i] >= '0' && ss[i] <= '9' && num[ss[i] - '0'] == 0)
            cout<<ss[i];
        if(ss[i] >= 'a' && ss[i] <= 'z' && a[ss[i] - 'a'] == 0 )
            cout<<ss[i];
        if(ss[i] >= 'A' && ss[i] <= 'Z' && f == false)
            cout<<ss[i];
        if(ss[i] == '_' || ss[i] == ',' || ss[i] == '.' || ss[i] == '-')
        for (int j = 0; j < k; j++)
        {
            if(c[j] == ss[i])
                break;
            if(j == k - 1)
                cout<<ss[i];
        }
    }
    cout<<endl;
    return 0;
}