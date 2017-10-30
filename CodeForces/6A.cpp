#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int tri(int a,int b,int c)
{
   if(a + b > c)
    return 0;
   else
   if(a + b == c)
    return 1;
   return 2;
}

int main()
{
    int a[4],t[4];
    while(scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3])!=EOF)
    {
       sort(a,a+4);

       t[0]=tri(a[0],a[1],a[2]);
       t[1]=tri(a[0],a[1],a[3]);
       t[2]=tri(a[0],a[2],a[3]);
       t[3]=tri(a[1],a[2],a[3]);
       
       sort(t,t+4);
       
       if(t[0] == 0)
        printf("TRIANGLE\n");
       else
       if(t[0] == 1)
        printf("SEGMENT\n");
       else
        printf("IMPOSSIBLE\n");
    }
    return 0;
}