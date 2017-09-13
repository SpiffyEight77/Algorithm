#include<cstdio>
#include<iostream>
#define maxn 1010
using namespace std;
int s[maxn];
int n,i,x;

void push(int x)
{
    s[i] = x;
}

int pop()
{   
    return s[n];
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(i = 0; i<n; i++)
        {
            scanf("%d",&x);
            push(x);
        }
        while(n--)
        {
            printf("%d ",pop());
        }
    }
    return 0;
}