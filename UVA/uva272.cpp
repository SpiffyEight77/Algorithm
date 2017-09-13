#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char str;

int main()
{
    bool f = true;

    while((str = getchar())!=EOF)
    {
        if(str == '"')
            {
                printf("%s",f ? "``" : "''");
                f=!f;
            }
        else
            putchar(str);
    }    
    return 0;
}