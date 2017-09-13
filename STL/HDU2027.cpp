#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
int n;
char s[1010];
int main()
{
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        map<char,int>mp;
        mp['a'] = mp['e'] = mp['i'] = mp['o'] = mp['u'];
        gets(s);
        for (int i = 0; i < strlen(s);i++)
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            mp[s[i]]++;
        map<char,int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
            cout<<it->first<<":"<<it->second<<endl;
        if(n)
            cout<<endl;
    }
    return 0;
}