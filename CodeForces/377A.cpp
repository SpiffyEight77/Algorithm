#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int  k,r;
int main()
{
    while(scanf("%d %d",&k,&r)!=EOF)
    {
        for(int i = 1; ; i++)
        {
            long long sum = i * k;
            if(sum % 10 == 0 || sum % 10 == r)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}