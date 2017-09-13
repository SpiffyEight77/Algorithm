#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 200010;
char s[M],c;
int l,p;
bool f;
int main()
{
    while(scanf("%s",s)!=EOF)
    {
        getchar();
        l = strlen(s); f = 0; p = -1;
        for (int i = 0; i<= l-2; i++)
        {
            if((s[i] - '0') % 2 == 0 && (s[i] - '0') < (s[l-1] - '0') )
            {
                swap(s[i],s[l-1]);
                p = i;
                f = 1;
                break;
            }
            else
                if((s[i] - '0') % 2 == 0 && (s[i] - '0') > (s[l-1] - '0') )
                    p = i;
        }
        if(!f && p != -1)
            swap(s[p],s[l-1]);
        if(p == -1)
            printf("-1\n");
        else
            printf("%s\n",s);
    }
    return 0;
}