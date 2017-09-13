#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
string s;
bool f;
int main()
{
    f = false;
    map<char,int>mp;
    map<char,bool>mark;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        mark[s[i]] = 1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(mark[i+'a'] == 0)
        {
            f = true;
            printf("%c\n",i+'a');
            break;
        }
    }
    if(!f)
        printf("None\n");
    return 0;
}