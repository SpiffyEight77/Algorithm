#include<cstdio>
#include<iostream>
#include<cmath>
int main()
{
    int x,y,i,j,c,k,f;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        k = 0;
        if(x == 0 && y == 0)
            break;
        c = y - x + 1;
        for(i = x; i <= y; i++)
        {
            f = 1;
            int x = i*i+i+41;
            for(j = 2; j<=sqrt(x); j++)
                if(x % j == 0)
                {
                    f = 0;
                    break;
                }
            if(!f)
             break;
            else
            k++;
        }
        if(c == k)
            printf("OK\n");
        else
            printf("Sorry\n");
    }
    return 0;
}