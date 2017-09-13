#include<iostream>
#include<cstring>
#include<cmath>
#define Len 10010
using namespace std;
int a[Len],n;
int main()
{
    memset(a,1,sizeof(a));
    for(int i = 3; i <= Len; i++)
    {  
        for(int j = 2; j <= sqrt(i); j++)
            if(i % j == 0)
            {   
                a[i] = 0;
                break;
            }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = n/2; i >= 0; i--)
            if(a[i] && a[n-i])
            {
                printf("%d %d\n",i,n-i);
                break;
            }
    }
    return 0;
}