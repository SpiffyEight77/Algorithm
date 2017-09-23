#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
char str[110];
int l;
bool f;
int main()
{
    f = 1;
    scanf("%s",str);
    if(strlen(str) <= 3)
        f = 0;
    else
        if(str[0] == 'Y' && str[1] == 'A' && str[2] == 'K' && str[3] == 'I')
            f = 1;
    else 
        f = 0;
    if(f)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}