#include<iostream>
#include<cstring>
using namespace std;
int n,p,Max,c[1010];
char s[1010][10];
int main()
{
    while(scanf("%d",&n) && n)
    {
        memset(s,0,sizeof(s));
        memset(c,0,sizeof(c));
        for(int i = 0; i < n; i++)
            scanf("%s",s[i]);
        for(int i = 0; i < n; i++)
            for(int j = i; j < n; j++)
                if(strcmp(s[i],s[j]) == 0)
                    c[i]++;
        Max = c[0];
        p = 0;
        for(int i = 1; i < n; i++)
            if(c[i] > Max)
            {
                Max = c[i];
                p = i;
            }
        printf("%s\n",s[p]);
    }
    return 0;
}