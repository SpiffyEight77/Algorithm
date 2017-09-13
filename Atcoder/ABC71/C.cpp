#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1000010;
int n; 
long long x,y,l,a[M];
bool cmp(int x,int y)
{
    return x > y;
}
int main()
{   
    x = 0;
    y = 0;

    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%lld",&a[i]);

    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        if(a[i] == a[i+1])
        {
            if(!x)
                x = a[i];
            else
            {
                y = a[i];
                break;
            }
            ++i;
        }
    }
    printf("%lld\n",(long long)x*y);
    return 0;
}