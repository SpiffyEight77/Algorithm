#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 10010;
char s[Maxn];
int main()
{
    scanf("%s",s);
    for (int i = 0; i < strlen(s) - 8;i++)
        printf("%c",s[i]);
    printf("\n");
    return 0;
}