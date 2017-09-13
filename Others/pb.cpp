#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 105
using namespace std;
int l,n,i,j,tmax,sup,c1,c2,a[N],b[N],t[N];
int main()
{
    cin>>l>>n;
    tmax=0,sup=0;
    while(n--)
    {
        memset(t,0,sizeof(t));
        for(i=1;i<=l;i++)
         cin>>a[i];
        for(i=1;i<=l;i++)
         cin>>b[i];
        for(i=1;i<=l;i++)
        {
           if(sup%5==0)
           {
               c1=t[i-1]+b[i];
               c2=t[i-1]+a[i];
               if(c1<c2)
               {
                   t[i]=t[i-1]+b[i];
                   sup--;
               }
               else
               {
                   t[i]=t[i-1]+a[i];
                   sup+=20;
               }
           }
           else
           {
               t[i]=t[i-1]+a[i];
               sup+=20;
           }
        }
    }
    return 0;
}