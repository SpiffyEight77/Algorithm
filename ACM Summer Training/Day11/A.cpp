#include<iostream>
#include<cstring>
#define M 1000010
using namespace std;
int n,k,num[M];
int main()
{
    memset(num,0,sizeof(num));
    k = 1;
    num[1] = 0;
    for (int i = 2; i <= M; i++)
        if(!num[i])
        {
            num[i] = k;
            for (int j = i + i; j <= M; j+=i)
                num[j] = k;
            k++;
        }
    while(scanf("%d",&n)!=EOF)
    {
        printf("%d\n",num[n]);
    }
    return 0;
}