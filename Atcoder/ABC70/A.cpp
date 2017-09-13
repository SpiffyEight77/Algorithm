#include<iostream>
#include<cstring>
#include<algorithm>
#define M 10010
int n;
bool f;
int main()
{
        scanf("%d",&n);
        if(n/100!=n%10)
            printf("No\n");
        else
            printf("Yes\n");
    return 0;
}