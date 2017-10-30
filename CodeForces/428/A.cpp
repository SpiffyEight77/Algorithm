#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int M = 10100; 
int p,n,k,a[M],ans;
bool f;
int main()
{
    while(scanf("%d %d",&n,&k)!=EOF)
    {

        for (int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        for (int i = 1; i <= n; i++)
        {
            if(a[i] >= 8)
            {   
                k-=8;
                a[i+1] +=a[i] - 8;
            }
            else
                k-=a[i];
            if(k <= 0)
            {
                p = i;
                break;
            }
        }
        if(k > 0)
            printf("-1\n");
        else
            printf("%d\n",p);

    }
    return 0;
}