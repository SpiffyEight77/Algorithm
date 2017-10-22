#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000;
int n,k,q,p,ans,a[Maxn];
int main()
{
    ans = 1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        scanf("%d",&a[i]);

    for (int i = 0; i < n; i++)
    {
        k = 0;
        for (int j = a[i]-1; j <= a[i]+1; j++)
        {
            if(j%2!=0)
                k++;
        }    
        ans*=k;
    }
    printf("%0.lf\n",pow(3,n)-ans);
    return 0;
}