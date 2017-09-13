#include<cstdio>
#include<iostream>
#include<cstring>
#define len 1010
using namespace std;

int n,i,s[len],a[len],b[len];

void push(int x)
{
    s[i] = x;
}

int pop()
{
    return s[n-i-1];
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        int f =1;
        for(i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
            push(a[i]);
        }

         for(i = 0; i < n; i++)
        {
            scanf("%d",&b[i]);
            if(pop() != b[i])
            {
                printf("No\n");
                f = 0;
                break;
            }
        }
        if(f == 1)
            printf("Yes\n");
        
    }
    return 0;
}