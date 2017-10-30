#include<cstdio>
#include<iostream>
#define maxn 35
using namespace std;
int main()
{
    int t,n,sumtime,maxsum,minsum,mintime[maxn],maxtime[maxn],res[maxn];
    while(scanf("%d %d",&n,&sumtime)!=EOF)
    {
        maxsum=0; minsum=0;
        for(int i=0;i<n;i++)
         {
             scanf("%d %d",&mintime[i],&maxtime[i]);
             minsum+=mintime[i];
             maxsum+=maxtime[i];
         }
         if(minsum <= sumtime && maxsum >= sumtime)
         {
             printf("YES\n");
             t=sumtime-minsum;
             for(int i=0;i<n;i++)
             {
                 if(t>=maxtime[i]-mintime[i])
                 {
                     t-=maxtime[i]-mintime[i];
                     res[i]=maxtime[i];
                 }
                 else
                 if(t>0)
                 {
                     res[i]=mintime[i]+t;
                     t=0;
                 }
                 else
                    res[i]=mintime[i];
             }
         }
         else
         {
             printf("NO\n");
             continue;
         }
         printf("%d",res[0]);
         for(int i=1;i<n;i++)
            printf(" %d",res[i]);
         printf("\n");
    }
    return 0;
}