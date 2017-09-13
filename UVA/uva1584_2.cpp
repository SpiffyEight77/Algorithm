#include<cstdio>
#include<iostream>
#include<cstring>
char s[110];
int i,j,p,l;

int less(int p,int q)
{
    for(j = 0; j<l; j++)
        if(s[(p+j)%l] != s[(q+j)%l])
        {
            if(s[(p+j)%l] > s[(q+j)%l])
                return 1;
            else
                return 0;
        }
    return 0;
}

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        p=0;
        l = strlen(s);
        for(i=1; i<l; i++)
            if(less(p,i))
                p = i;

        for(i = 0; i<l; i++)
            printf("%c",s[(i+p)%l]);
        printf("\n");
    }
    return 0;
}