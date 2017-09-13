#include<iostream>
using namespace std;
int n;
int phi(int n)
{
    int res = n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            n/=i;
            res = res - res / i;
        }
        while(n % i == 0)
            n/=i;
    }
    if(n > 1)
        res = res - res / n; 
    return res;
}
int main()
{
    while(scanf("%d",&n)!=EOF && n)
    {
        printf("%d\n",phi(n));
    }
    return 0;
}