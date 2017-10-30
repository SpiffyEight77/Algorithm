#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    char c;
    int f = 1;
    while((c = getchar())!=EOF)
    {
        if(c == '"')
        {
            if(f == 1)
                printf("``");
            else
                printf("''");
            f = -f;
        }
        else
        putchar(c);
    }
    return 0;
}