#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int a,b,c;
int main()
{
    scanf("%d%d%d",&a,&b,&c);
    if(a == b)
        printf("%d\n",c);
    else
        if(a == c)
            printf("%d\n",b);
    else
        printf("%d\n",a);
    return 0;
}