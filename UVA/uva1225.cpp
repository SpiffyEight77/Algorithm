#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    cin>>t;
    while(t--)
    {
     int num[10]={0};
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int b=i;
         while(b)
         {
             num[b%10]++;
             b/=10;
         }
     }
     printf("%d",num[0]);
     for(int i=1;i<=9;i++)
         printf(" %d",num[i]);
     printf("\n");
    }
    return 0;
}