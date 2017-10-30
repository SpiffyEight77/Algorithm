#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    long long  i,j,k,r1,r2,l1,l2,end,start;
    while(scanf("%I64d %I64d %I64d %I64d %I64d",&l1,&r1,&l2,&r2,&k)!=EOF){
       if(l1>r2 || l2>r1){
           printf("0\n");
           break;
       }
       else
       if(r1>r2)
        end=r2;
        else
         end=r1;
       if(l1<l2)
        start=l2;
        else
         start=l1;
      if(k > start && k < end)
        printf("%I64d\n",end-start);
      else
      if(k == start || k == end)
       printf("%I64d\n",end-start);
      else
       printf("%I64d\n",end-start+1);
    }
    return 0;
}