#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int x;
bool f;
int main()
{
    f = 0;
    scanf("%d",&x);
    while(x)
    {
        if(x%10 == 9)
        {
            printf("Yes\n");
            f = 1;
            break;
        }
        x/=10;
    }
    if(!f)
        printf("No\n");
    return 0;
}