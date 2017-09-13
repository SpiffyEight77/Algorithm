#include<cstdio>
#include<iostream>
#define maxn 100100
using namespace std;

int t[maxn],n,a,b,aa,bb,i,j;

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        a = 0; aa = 0;
        b = 0; bb = 0;
        for(int i = 0; i < n; i++)
            scanf("%d",&t[i]);
        i = 0; j = n-1;
        for(;i <= j;)
        {
           if(a <= b)
           {
               a+=t[i++];
               aa++;
               continue;
           }
           else
           if(a > b)
           {
               b+=t[j--];
               bb++;
               continue;
           }
           else
           break;
        }

        printf("%d %d\n",aa,bb);
        
    }
    return 0;
}