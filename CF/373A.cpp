/*#include<cstdio>
#include<iostream>
#include<cstring>
#define maxn 110
using namespace std;
int main()
{
    int n,m[maxn];
    while(scanf("%d",&n)!=EOF)
    {
     for(int i=1;i<=n;i++)
       scanf("%d",&m[i]);
     if(m[n] == 0)
     {
         printf("UP\n");
         continue;
     }
     else
     if(m[n] == 15)
     {
         printf("DOWN\n");
         continue;
     }
     else
     if(n == 1)
     {
         printf("-1\n");
         continue;
     }
     else
     if(m[n-1] > m[n])
     {      
         printf("DOWN\n");
         continue;
     }
     else
     {
         printf("UP\n");
         continue;
     }
    }
    return 0;
}*/
#include<cstdio>
#include<iostream>
#define maxn 110
using namespace std;
int main()
{
    int n,m[maxn];
    while(scanf("%d",&n)!=EOF)
    {
      for(int i=0;i<n;i++)
       scanf("%d",&m[i]);
      if(m[n-1]==0)
      {
          printf("UP\n");
          continue;
      }
      else
      if(m[n-1] == 15)
      {
          printf("DOWN\n");
          continue;
      }
      else
      if(n == 1)
      {
          printf("-1\n");
          continue;
      }
      else
      if(m[n-1] > m[n-2])
      {
          printf("UP\n");
          continue;
      }
      else
      {
          printf("DOWN\n");
          continue;
      }
    }
    return 0;
}
