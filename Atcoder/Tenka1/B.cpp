#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
const int M = 100010;
int n,p,s,a[M],b[M];
int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i] > p)
        {
            p = a[i];
            s = b[i];
        }
    }
    printf("%d\n",p+s);
    return 0;
}