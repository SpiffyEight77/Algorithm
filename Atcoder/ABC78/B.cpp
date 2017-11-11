#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100010;
int x,y,z,cnt,ans,maxn;
int main()
{
    cin>>x>>y>>z;
    cnt = x/y;
    maxn = 0;
    for (int i = 1; i <= cnt; i++)
    {
        ans = i * y + z * ( i - 1 ) + 2 * z;
        if(ans <= x && i > maxn)
            maxn = i;
    }
    printf("%d\n",maxn);
    return 0;
}