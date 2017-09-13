#include<iostream>
#define Maxn 3000005
using namespace std;
int n,m,i,eul[Maxn];
long long sum;
void getphi(int n)
{
    for(int i = 1; i <= Maxn; i++)
        eul[i] = i;
    for(int i = 2; i <= Maxn; i++)
        if(i == eul[i])
            for(int j = i; j <= Maxn; j+=i)
                eul[j] = (eul[j] / i) * (i - 1);
}
int main()
{
    getphi(Maxn);
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i = n,sum = 0; i <= m; i++)
            sum += eul[i];
        printf("%lld\n",sum);
    }
    return 0;
}