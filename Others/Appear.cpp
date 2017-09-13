#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define maxn 1010
using namespace std;
int a[maxn],num[maxn];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(num,0,sizeof(num));
        for(int i = 0; i < n; i++)
            {
                scanf("%d",&a[i]);
                num[a[i]]=1;
            }
        sort(a,a+n);
        for(int i = 0; i <=a[n-1]+1;i++)
            if(num[i] == 0)
            {
                printf("%d\n",i);
                break;
            }
    }
    return 0;
}