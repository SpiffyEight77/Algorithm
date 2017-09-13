#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int x,a,b;
int main()
{
    scanf("%d%d%d",&x,&a,&b);
    if(abs(x-a) > abs(x-b))
        printf("B\n");
    else
        printf("A\n");
    return 0;
}