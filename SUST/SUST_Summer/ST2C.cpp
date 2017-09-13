#include<iostream>
#include<cstring>
using namespace std;
int n,x,y,c,i,j,k;
int gcd(int a,int b)
{
    int t;
    while(b)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        c = 0;
        scanf("%d%d",&x,&y);
        for(i = 1; i <= y; i++)
            for(j = 1; j <= y; j++)
                for(k = 1; k <= y; k++)
                 {  
                     printf("%d\n",gcd(i,j/gcd(j,k)*k));
                     c++;
                 }
                    // if(gcd(i,gcd(j,k)) == x && i / x * j / x  == y / k)
                    //     c++;
        printf("%d\n",c);
    }
    return 0;
}