#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 10010

int n,i,j;
char s[maxn];

void solve1()
{
    int l = strlen(s);
    int num = 0;
    int k = 1;

    for(i = l-1; i >= 0; i--)
    {
        if(s[i] == 'C')
            break;
        num += k*(s[i]-'0');
        k*=10;
    }

    if(num/26 == 0 )
        printf("%c",num%26-1+'A');
    else
    printf("%c%c",num/26-1+'A',num%26-1+'A');

    num = 0;
    k = 1;

    for(j = i-1; j >= 0; j--)
    {
        if(s[j] == 'R')
            break;
        num += k*(s[j]-'0');
        k *= 10;
    }

    printf("%d\n",num);
}

void solve2()
{
    int l =strlen(s);
    int num = 0;
    int k = 1;

    for(i = l-1; i >= 0; i--)
    {
        if(s[i] <= '0' || s[i] >= '9')
            break;
        num += k*(s[i]-'0');
        k*=10;    
    }

    printf("R%dC",num);

    num = 0;
    k = 26;

    num += s[i]-'A'+1;

    for(j = i-1; j >= 0; j--)
    {
        num += k*(s[j]-'A'+1);
        k *= 26 ;
    }

    printf("%d\n",num);
}

int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        if(s[1] >= '0' && s[1] <= '9' && s[0] == 'R')
            solve1();
        else
            solve2();
    }
    return 0;
}