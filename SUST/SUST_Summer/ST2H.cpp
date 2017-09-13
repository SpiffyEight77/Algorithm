#include<iostream>
#define Len 9989899
using namespace std;
int n,x,y,prime[Len];
bool a[Len]={false};
bool judge(int xx)
{
    int t = xx;
    int yy = 0;
    while(t)
    {
        yy = yy * 10 + t % 10;
        t/=10;
    }
    return yy == xx; 
}
int main()
{
    int c = 0;
    for(int i = 2; i <= Len; i++)
        if(!a[i])
            for(int j = i * 2; j <= Len; j += i)
                a[j] = true;
    for(int i = 5; i <= Len; i++)
        if(!a[i] && judge(i))
            prime[c++] = i; 
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        for(int i = 0; i < c; i++)
        {
            if(prime[i] < x)
                continue;
            else
                if(prime[i] <= y)
                    printf("%d\n",prime[i]);
            else
                break;
        }
        printf("\n");
    }
    return 0;
}