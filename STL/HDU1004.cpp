#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
int n,maxn;
string s,str;
int main()
{
    while(~scanf("%d",&n) && n)
    {
        maxn = 0;
        map<string,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>s;
            mp[s]++;
        }
        map<string,int>::iterator it;
        for (it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second > maxn)
            {
                maxn = it->second;
                str =  it->first;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}