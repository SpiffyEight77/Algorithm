#include<iostream>
#include<cstring>
#include<algorithm>
#define M 1010 
using namespace std;
int a,b;
int main()
{
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a % 3 == 0 || b % 3 == 0 || (a+b)%3 == 0)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}