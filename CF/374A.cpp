#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 10010
using namespace std;

char s[maxn];
int b[maxn];
int main()
{
    int n,l,i,j,c,k;
    while(scanf("%d",&n)!=EOF)
    {
        c = 0; k = 0;
        memset(b,0,sizeof(b));
        scanf("%s",s);
        l = strlen(s);
        for(i = 0; i < l; i++)
        {
            if(s[i] == 'B' && s[i]!=s[i+1])
            {
                b[k++]++;
                c++;
            }
            else
            if(s[i] == 'B' && s[i] == s[i+1])
                b[k]++;
        }
        if(!c)
        printf("0");
        else
        {
        printf("%d\n",c);
        for(j = 0; j <=c; j++)
            if(b[j] != 0)
                printf("%d ",b[j]);
        }
        printf("\n");
    }
    return 0;
}