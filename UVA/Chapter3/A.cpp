#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1010;
char s[M],c;
//bool f;
int l,f;
int main()
{
    f = 1;
    while(gets(s))
    {
        l = strlen(s);
        for (int i = 0; i < l; i++)
            if(s[i] == '"')
            {
                printf("%s",f == 1 ? "``" : "''");
                f = -f;
            }
            else
                printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}