#include<cstdio>
#include<iostream>
#include<cstring>
#define len 1010
using namespace std;

char str[len];
int i ,j;

int main()
{
    while(scanf("%s",str)!=EOF)
    {
        int sum = 0;
        int maxn = 0;
        int l = strlen(str);
        for(i = 0,j = 0; i < l; i++)
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
            {
                sum = i + 1 - j;
                j = i + 1;
                if(maxn < sum)
                    maxn = sum;
                //printf("%d\n",sum);
            }
        //printf("%d\n",i+1-j);
        if(maxn < i + 1 - j)
         maxn = i + 1 - j;
        printf("%d\n",maxn);
    }
    return 0;
}