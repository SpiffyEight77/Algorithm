#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n,k,l;
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        if(n%2 == 0)
        {
            printf("%d\n2",n/2);
            for (int i = 2; i <= n/2; i++)
                printf(" 2");
            printf("\n");
        }
        else
            {
                printf("%d\n",n/2);
                for (int i = 1; i < n/2; i++)
                    printf("2 ");
                printf("3\n");
            }
    }
    return 0;
}