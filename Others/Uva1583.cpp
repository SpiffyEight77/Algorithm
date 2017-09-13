#include<cstdio>
#include<iostream>
#define len 10000010

int generator[len]={0};

int main()
{
    int n,x;
    int num,sum;

    for(int i = 1; i <= len; i++)
    {
        sum = i;
        x = i;
        while(x)
        {
           sum+=x%10;
            x /= 10;
        }
        if(generator[sum])
            continue ;
        else
            generator[sum] = i;
    }
    scanf("%d",&n);

    while(n--)
    {
        scanf("%d",&num);
        printf("%d\n",generator[num]);
    }
    return 0;
}