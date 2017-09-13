#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define N 1010
using namespace std;
int n,i,j,t,c1,c2,A,B,a[N],b[N];
int main()
{
    t=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(!n)
         break;
         printf("Game %d:\n",++t);
        for(i=0;i<n;i++)
         cin>>a[i];
        while(1)
        {
            A=0,B=0;
            for(i=0;i<n;i++)
                 {
                     cin>>b[i];
                     if(a[i]==b[i])
                     A++;
                 }
            if(b[0]==0)
             break;
            for(i=1;i<=9;i++)
            {
              c1=0,c2=0;
              for(j=0;j<n;j++)
                {
                    if(a[j]==i) c1++;
                    if(b[j]==i) c2++;
                }
                B+=min(c1,c2);
            }
            printf("    (%d,%d)\n",A,B-A);
        }
    }
    return 0;
}