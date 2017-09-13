#include<iostream>
using namespace std;
int s,v1,v2,t1,t2,sum1,sum2;
int main()
{
    while(scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2)!=EOF)
    {
        sum1 = t1*2 + v1 * s;
        sum2 = t2*2 + v2 * s;
        if(sum1 == sum2)
            printf("Friendship\n");
        else
            if(sum1 < sum2)
                printf("First"); 
        else
            printf("Second");
    }
    return 0;
}