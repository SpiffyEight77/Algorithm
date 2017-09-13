#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define len 100100
using namespace std;

int l[len],r[len],c[len],a[len];
int n,i,j,k,maxn; 

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        int L = 0,R = 0,p = 0,maxn = 0,k = 0;

        for(i = 1; i <= n; i++)
        {
            scanf("%d %d",&l[i],&r[i]);
            L+=l[i];
            R+=r[i];
           /* c[i] = abs(l[i]-r[i]);
            if(maxn < c[i])
            {
                maxn = c[i];
                p = i;
            }*/
            //a[i] = c[i];
        }

        maxn = abs(L-R);
       // printf("%d\n",maxn);
        //printf("%d\n",p);
    for(int i = 1; i <= n; i++)
    {
        L = 0; R = 0;
        swap(l[i],r[i]);

        for(int j = 1; j <= n; j++)
        {
            L+=l[j];
            R+=r[j];
        }

        if(maxn < abs(L-R))
        {
            maxn = abs(L-R);
            k = i;
        }
        swap(l[i],r[i]);
    }   
   
   /* swap(l[p],r[p]);
    //k = i;
    L = 0;
    R = 0;
    for(i =1; i<=n; i++)
    {
        L+=l[i];
        R+=r[i];
    }
   // printf("%d\n",abs(L-R));
    if(maxn < abs(L-R))
        printf("%d\n",p);
    else
        printf("0\n");*/

    printf("%d\n",k);
    }
    return 0;
}