#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 1010
using namespace std;

char s[maxn];
char a[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
int main()
{
       while( gets(s))
       {
        int l = strlen(a);
        int l1 = strlen(s);

        for(int i = 0; i < l1; i++)
        {
            for(int j = 0; j < l; j++)
                if(s[i] == a[j])
                {
                    printf("%c",a[j-1]);
                    break;
                }
            else
            if(s[i] == ' ')
            {
                printf("%c",s[i]);
                break;
            }
       }
       printf("\n");
       }
    return 0;
}