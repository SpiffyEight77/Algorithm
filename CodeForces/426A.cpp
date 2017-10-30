#include<iostream>
using namespace std;
char s1,s2,c,s[20]={"v<^>v<^>v<^>"};
int n;
int main()
{
    while(scanf("%c%c%c",&s1,&c,&s2)!=EOF)
    {
        scanf("%d",&n);
        getchar();
        for(int i = 0; i < 4; i++)
            if(s1 == s[i])
            {
                n%=4;
                if(s[i + 4 + n] == s[i + 4 - n] )
                    printf("undefined\n");
                else
                    if(s[i + 4 + n] == s2)
                        printf("cw\n");
                else
                    if(s[i + 4 - n] == s2)
                        printf("ccw\n");
                else
                    printf("undefined\n");
                break;
            }
    }
    return 0;
}