#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
char S[1100];
int ans,p,a[26];
int main()
{
    gets(S);
    for (int i = 0; i < strlen(S); i++)
    {
        if(S[i] >= 'A' && S[i] <= 'Z')
            a[S[i] - 'A']++;
        if(S[i] >= 'a' && S[i] <= 'z')
            a[S[i] - 'a']++;
    }
    p = 0;
    ans = a[0];
    for (int i = 1; i < 26; i++)
        if(a[i] > ans)
            ans = a[i],p = i;
    printf("%c %d\n",p + 'a',ans);
    return 0;
}