#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn = 100000;
char s[maxn],t[maxn];
int l1,l2,l3,k,i,j,p;
bool f;
int main()
{
    scanf("%s",s);
    getchar();
    scanf("%s",t);
    getchar();
    l1 = strlen(s);
    l2 = strlen(t);
    l3 = l2;
    k = 0;
    f = true;
    for (i = 0; i < l1; i++)
    {
        if(s[i] == t[k])
        {
            p = i;
            for (j = i+1; j < l1; j++)
                if(s[j] == t[k+1] || s[j] == '?')
                    k++;
                else
                    break;
        }
        else
            if(s[i] == '?')
                s[i] = 'a';
    }
    if(k+1 != l2)
        printf("UNRESTORABLE\n");
    else
    {
        for (int i = 0; i < p; i++)
            printf("%c",s[i]);
        printf("%s\n",t);
    }
    return 0;
}