#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
int n,x,maxn,p;
int main()
{
    while(~scanf("%d",&n) && n)
    {   
        maxn = 0;
        map<int,int>mp;
        while(n--)
        {
            scanf("%d",&x);
            mp[x]++;
        }
        map<int,int>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++)
            if(maxn < it->second)
            {
                maxn = it->second;
                p = it->first;
            }
        printf("%d\n",p);
    }
    return 0;
}