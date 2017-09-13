#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char a[]={"A   3  HIL JM O   2TUVWXY51SE4Z  8 "};
char str[1010];
int l;

char judge(char c)
{
    if(c>='A' && c<='Z')
        return a[c-'A'];
    else
        return a[c-'0'+25];
}

int main()
{   
    while(scanf("%s",str)!=EOF)
    {
        l = strlen(str);
        int m = 1,n = 1;
        for(int i = 0; i < (l+1)/2; i++)
        {
            if(str[i] != str[l-i-1])
            {
                m = 0;
                break;
            }
        }

        
        for(int i = 0; i < (l+1)/2; i++)
        {
            if(str[i] != judge(str[l-i-1]))
            {   
                n = 0;
                break;
            }
        }

        if(m == 1 && n == 1)
            printf("%s -- is a mirrored palindrome.\n",str);
        else
            if(m == 1 && n == 0)
                printf("%s -- is a regular palindrome.\n",str);
        else
            if(m == 0 && n == 1)
                printf("%s -- is a mirrored string.\n",str);
        else
            printf("%s -- is not a palindrome.\n",str);
        printf("\n");
    }
    return 0;
}