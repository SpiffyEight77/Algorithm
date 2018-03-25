#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
char s[1010][30];
int k = 1;
int main()
{
    while(1)
    {
        scanf("%s",s[k]);
        if(s[k][0] == '.')
            break;
        k++;
    }
    if(k - 1 < 2)
        cout<<"Momo... No one is for you ..."<<endl;
    else
        if(k - 1 >= 14)
            printf("%s and %s are inviting you to dinner...\n",s[2],s[14]);
    else
        printf("%s is the only one for you...\n",s[2]);
    return 0;
}