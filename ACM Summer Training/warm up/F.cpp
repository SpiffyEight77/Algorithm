#include<iostream>
#include<cstring>
using namespace std;
char s[110],s1[4] = {"ZOJ"};
int a[4];
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        if(s[0] == 'E')
            break;
        memset(a,0,sizeof(a));
        for(int i = 0; i < strlen(s); i++)
            if(s[i] == 'Z')
                a[0]++;
            else
                if(s[i] == 'O')
                    a[1]++;
            else
                a[2]++;
        for(int i = 0; i < 3; i++)
            while(a[i])
            {
                a[i]--;
                printf("%c",s1[i]);
                for(int j = i+1; j < 3; j++)
                    if(a[j])
                        a[j]--,printf("%c",s1[j]);
            }
        printf("\n");
    }
    return 0;
}