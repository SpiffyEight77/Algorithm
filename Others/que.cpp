#include<cstdio>
#include<iostream>
#define maxn 1010
using namespace std;

int q[maxn];
int n,i,j,x;

void push(int x)
{
    q[i] = x;
}

int pop()
{
    return q[i];
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(i = 0; i < n; i++)
        { 
            scanf("%d",&x);
            push(x);
        }
        for(i = 0; i< n; i++)
            printf("%d ",pop());
    }    
    return 0;
}