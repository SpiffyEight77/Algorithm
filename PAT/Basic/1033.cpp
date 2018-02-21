#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
string s;
char badkey[1100];
int flag,f = 0;
int main()
{
    gets(badkey);
    cin>>s;
    for (int i = 0; i < strlen(badkey); i++)
        if(badkey[i] == '+')
        {
            f = 1;
            break;
        }

    for (int i = 0; i < s.size(); i++)
    {
        flag = 0; 
        if( (s[i] >= 'A' && s[i] <= 'Z') && (f == 1) )
            continue;
        for (int j = 0; j < strlen(badkey); j++)
            if( s[i] == badkey[j] || (s[i] >= 'a' && s[i] <= 'z' && s[i] + 'A' - 'a' == badkey[j]) )
            {
                flag = 1;
                break;
            }
        if(flag == 0)
            cout<<s[i];
    }
    cout<<endl;
    return 0;
}