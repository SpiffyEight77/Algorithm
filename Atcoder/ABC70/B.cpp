#include<iostream>
using namespace std;
int a,b,c,d,x,y;
int main()
{
    while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
    {
        if(c > b || a > d)
        {
            printf("0\n");
            continue;
        }
        if(a > c)
            x = a;
        else
            x = c;
        if(b > d)
            y = d;
        else
            y = b;
        printf("%d\n",y-x);
    }
    return 0;
}