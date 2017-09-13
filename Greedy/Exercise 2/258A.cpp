#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 100010;
char s[M];
int l,p;
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        l = strlen(s);
        p = -1;
        for (int i = 0; i < l; i++)
            if(s[i] == '0')
            {
                p = i;
                break;
            }
        if(p == -1)
            p = 0;
        for (int i = 0; i < l; i++)
            if(i == p)
                continue;
            else
                printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}