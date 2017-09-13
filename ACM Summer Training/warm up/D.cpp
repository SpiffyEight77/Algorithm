#include<iostream>
#include<cstring>
using namespace std;
int x,y,l;
char s1[20],s2[20];
bool f;
int main()
{
    while(scanf("%s%s",s1,s2)!=EOF)
    {
        getchar();
        l = strlen(s1);
        x = 0; y = 0;
        for(int i = 0; i < l; i++)
            if(s1[i] >= '0' && s1[i] <= '9')
                x = x * 10 + (s1[i] - '0');
        l = strlen(s2);
        for(int i = 0; i < l; i++)
            if(s2[i] >= '0' && s2[i] <= '9')
                y = y * 10 + (s2[i] - '0');
        if(s1[0] == '-')
            x = -x;
        if(s2[0] == '-')
            y = -y;
        printf("%d\n",x+y);
    }
    return 0;
}