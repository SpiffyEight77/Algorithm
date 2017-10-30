#include<cstdio>
#include<iostream>
#include<cstring>
#include<ctype.h>
#define maxn 1010
using namespace std;

char s[maxn];
char a[]={"A   3  HIL JM O   2TUVWXY51SE Z  8 "};

char resver(char c)
{
    if(isalpha(c))
        return a[c-'A'];
    else
        return a[c-'0'+25];
}

int main()
{
    while(scanf("%s",s)!=EOF)
    {
        int l = strlen(s);
        int m = 1,n = 1;
        for(int i = 0; i < (l+1)/2; i++)
        {
            if(s[i] != s[l-i-1])
                m = 0;
            if(s[i] != resver(s[l-i-1]))
                n = 0;
        }
        if(m == 0 && n == 0)
            printf("%s -- is not a palindrome.\n",s);
        else
        if(m == 1 && n == 0)
            printf("%s -- is a regular palindrome.\n",s);
        else
        if(m == 0 && n == 1)
            printf("%s -- is a mirrored string.\n",s);
        else
            printf("%s -- is a mirrored palindrome.\n",s);
        printf("\n");
    }
    return 0;
}
