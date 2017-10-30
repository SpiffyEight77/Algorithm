#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 100100
using namespace std;
char s[maxn][40],t[40];
int main()
{   
    int k,n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        k = 0;
        int num[maxn]={0};
        for( i = 0; i < n; i++)
        {
            scanf("%s",t);
            for( j = 0; j < k; j++)
            {
                if(strcmp(s[j],t) == 0)
                    break;
            }
            if(j == k)
            {
                strcpy(s[j],t);
                num[k++]=1;
                printf("OK\n");
            }
            else
                printf("%s%d\n",t,num[j]++);
        }
    }
    return 0;
}