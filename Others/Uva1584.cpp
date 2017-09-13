#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 110

char s[maxn];
int l;

int less( int p, int q)
{
    for(int i = 0; i < l; i++)
        if(s[(p+i)%l] != s[(q+i)%l])
            return s[(p+i)%l] < s[(q+i)%l] ;
    return 0;
}

int main()
{
    int n,p;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        l = strlen(s);
        p = 0;
        for(int i = 1; i < l; i++)
            if(less(i,p))
                p = i; 
        for(int i = 0; i < l; i++)
            printf("%c",s[(p+i)%l]);
        printf("\n");
    }
    return 0;
}