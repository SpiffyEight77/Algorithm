#include<cstdio>
#include<iostream>
#include<cstring>
const int maxn = 105;
using namespace std;
int main()
{
    int n,k,i;
    char str[maxn];
    while(~scanf("%d",&n))
    while(n--)
    {
      cin>>str;
      int l = strlen(str);
      for(i=1;i<=l;i++)
      {
          if(l%i == 0)
          for(k=i;k<l;k++)
           if(str[k]!=str[k%i])
             break;
          if(k==l)
           {
               printf("%d\n",i);
               break;
           }
      }
      if(n)
       printf("\n");
    }
    return 0;
}