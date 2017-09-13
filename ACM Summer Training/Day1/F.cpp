#include<iostream>
#include<algorithm>
using namespace std;
int a,b,c,d,n,maxn;
int main()
{
    scanf("%d",&n);
    while(n--)
    {
        maxn = 0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        for (int i = a; i <= b; i++)
        {
            for (int j = c; j <= d; j++)
            {
                maxn = max(maxn,i^j);
            }
        }
        printf("%d\n",maxn);
    }
    return 0;
}