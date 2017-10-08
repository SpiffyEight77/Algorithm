#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 200010;
int n,k,x,d[Maxn],m[Maxn],t[Maxn];
bool f;
int main()
{
    scanf("%d",&n);

    memset(d,0,sizeof(d));
    memset(m,0,sizeof(m));

    f = true;

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
        d[i]=x;
    }

    scanf("%d",&k);

    for (int i = 0; i < k; i++)
    {
        scanf("%d",&x);
        m[i] = x;
    }

    //sort(d,d+n);
    //sort(m,m+k);

    // for (int i = 0; i < k; i++)
    //     if(m[i] != d[i])
    //     {
    //         f = false;
    //         break;
    //     }

    for (int i = 0; i < k; i++)
        for (int j = 0; j < n; j++)
            if(m[i] == d[j])
            {
                m[i] = d[j] = 0;
                continue;
            }
    for (int i = 0; i < k; i ++)
            if(m[i] != 0)
            {
                f = false;
                break;
            }
    if(f)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}