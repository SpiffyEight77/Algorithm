#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 1010;
int l;
char s[M];
bool f;
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        getchar();
        l = strlen(s);
        f = 0;
        for (int i = l - 1; i >= 0; i--)
        {
            if(i == 0 && s[i] == '9')
                continue;
            if( (s[i] - '0') > 9 - (s[i] - '0') )
                s[i] = (9 - (s[i] - '0')) + '0';
        }
        for (int i = 0; i < l; i++)
        {
            if(s[i] != '0')
            {
                for (int j = i; j < l; j++)
                    printf("%c",s[j]);
                f = 1;
            }
            if(f)
                break;
        }
        printf("\n");
    }
    return 0;
}