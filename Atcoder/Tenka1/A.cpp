#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
const int M = 10010;
char str[M];
int ans;
int main()
{
    ans = 0;
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
        if(str[i] == '1')
            ans++;
    printf("%d\n",ans);
    return 0;
}