#include<cstdio>
#include<iostream>
#include<cstring>
#define len 30
using namespace std;

char s[len];
int num[10],t;

void solve(int t)
{
    for(int i = 1; i <= t; i++)
    {
        int k = i;
        if(k > 9)
        {
            while(k)
            {
                num[k%10]++;
                k/=10;
            }
        }
        else
        num[k]++;
    }
    printf("%d",num[0]);
    for(int i = 1; i <= 9; i++)
        printf(" %d",num[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        memset(num,0,sizeof(num));
        scanf("%d",&t);
        solve(t);
    }
    return 0;
}