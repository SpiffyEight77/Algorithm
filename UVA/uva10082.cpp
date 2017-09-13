#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char str[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
char c;

int main()
{
    while((c = getchar())!=EOF)
    {
        bool f = true;
        int l = strlen(str);
        for(int i = 0; i < l; i++)
            if(c == str[i])
            {
                putchar(str[i-1]);
                f=!f;
                break;
            }
        if(f)
            putchar(c);
    }
    return 0;
}