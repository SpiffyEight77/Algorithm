#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int h1,a1,c,h2,a2,cnt,res,a[Maxn];
int main()
{
    cin>>h1>>a1>>c;
    cin>>h2>>a2;
    cnt = 1;
    res = 1;
    while(h2 > 0)
    {
        if(cnt % 2 == 1)
        {
            if(h2 - a1 <= 0)
            {
                a[res] = 1;
                h2 -= a1;
            }
            else
            if(h1 - a2 <= 0)
            {
                a[res] = 0;
                h1 += c; 
            }
            else
            {
                a[res] = 1;
                h2 -= a1;
            }
            res++;
        }
        else
            h1-=a2;
        cnt++;
    }
    cout<<res-1<<endl;
    for (int i = 1; i < res; i++)
        if(a[i] == 0)
            cout<<"HEAL"<<endl;
        else
            cout<<"STRIKE"<<endl;
    return 0;
}