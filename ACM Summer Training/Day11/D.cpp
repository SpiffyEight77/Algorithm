#include<iostream>
using namespace std;
int T,n,b,x,y;
void exgcd(int a,int b,int &x,int &y)
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return ;
    }
    exgcd(b,a%b,x,y);
    int t = x;
    x = y;
    y = t - (a/b)*y;
    return ;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&b);
        exgcd(b,9973,x,y);
        x = (x%9973+9973)%9973;
        printf("%d\n",(x*n)%9973);
    }
    return 0;
}