#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000;
char s[Maxn];
int l;
bool f;
int main()
{
    f = false;
    scanf("%s",s);
    l = strlen(s);
    for (int i = 0; i < l; i++)
        if(s[i] == 'A' && s[i+1] == 'C')
        {
            f = true;
            break;
        }
    if(f)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}