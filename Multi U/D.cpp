#include<iostream>
#define Maxn 1000005
using namespace std;
int n,k,p[Maxn] = {0},a[Maxn];
int main()
{
    k = 0;
    for(int i = 2; i <= Maxn; i++)
    {
        if(!p[i]){
            for(int j = i + i; j <= Maxn; j+=i)
                p[j] = 1;
        a[i] = ++k;
        }
    }
    while(scanf("%d",&n)!=EOF)
    {
        for(int i = n; ; i++)
            if(p[i] == 0 && p[a[i]] == 0)
            {
                printf("%d\n",i);
                break;
            }
    }
    return 0;
}