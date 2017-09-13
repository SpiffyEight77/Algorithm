#include<iostream>
using namespace std;
int T,n,m,sum;
int phi(int x)
{
    int res = x;
    for(int i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        {
            res = res - res / i;
            x/=i;
        }
        while(x % i == 0)
            x/=i;
    }
    if(x > 1)
        res = res - res / x; 
    return res;
}
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        sum = 0;
        scanf("%d%d",&n,&m);
        for(int i = 1; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                if(i >= m)
                    sum += phi(n/i);
                if(n / i != i && n / i >= m)
                    sum += phi(i);
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}