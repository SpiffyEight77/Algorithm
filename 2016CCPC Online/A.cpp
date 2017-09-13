#include<iostream>
#include<cstring>
using namespace std;
const int M = 10000010;
char s[M];
int l,ans,c;
int main()
{
    c = 0;
    while(scanf("%s",s)!=EOF)
    {
        l = strlen(s);
        ans = 0;
        for (int i = 0 ;i < l; i++)
        {
            ans = (ans * 10 + (s[i] - '0')) % 10001;
        }
        if(!ans)
            printf("Case #%d: YES\n",++c);
        else
            printf("Case #%d: NO\n",++c);
    }
    return 0;
}