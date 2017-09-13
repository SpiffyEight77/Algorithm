#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        if(n == 1)
        {
            printf("0\n");
            continue;
        }
        if(n % 2 == 0)
            printf("%d\n",n/2-1);
        else
            printf("%d\n",n/2);
    }
    return 0;
}