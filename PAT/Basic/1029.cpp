#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int n;
string s,ss;
int num[10],a[27];
bool f,ff = false;
int main()
{
    cin>>s>>ss;
    for (int i = 0; i < s.size(); i++)
    {
        f = false;
        for (int j = 0; j <= ss.size(); j++)
        {
            if(ss[j] == s[i])
            {
                f = true;
                break;
            }
        }
        if(f == false)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                if(a[s[i] - 'a'] == 0)
                    printf("%c",s[i] - 'a' + 'A');
                a[s[i] - 'a'] = 1;
            }
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                if(a[s[i] - 'A'] == 0)
                    printf("%c",s[i]);
                a[s[i] - 'A'] = 1;
            }
            else
            if(s[i] >= '0' && s[i] <= '9' && num[s[i] - '0'] == 0)
            {
                cout<<s[i];
                num[s[i] - '0'] = 1;
            }
            else
            if(s[i] == '_' && ff == false)
            {
                ff =true;
                cout<<s[i];
            }
        }
    }
    cout<<endl;
    return 0;
}