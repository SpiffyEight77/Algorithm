#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1000010;
int n; 
long long x,y,l,a[M],num[M];
bool cmp(int x,int y)
{
    return x > y;
}
int main()
{   
    memset(num,0,sizeof(num));
    x = 0;
    y = 0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
        num[a[i]]++;
    }
    sort(a,a+n,cmp);

    l = 0;

    for (int i = 0; i < n; i++)
    {
        // if(x != 0 && y != 0)
        //     break;
        if(a[i] != l && num[a[i]] >= 4)
        {
            x = a[i];
            y = a[i];
            break;
        }
        if(a[i] != l && num[a[i]] >= 2)
        {
            if(!x)
            {
                x = a[i];
                l = a[i];
            }
            else
            {
                y = a[i];
                break;
            }
        }
    }
    printf("%lld\n",(long long)x*y);
    return 0;
}