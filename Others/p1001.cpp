#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a=1.0;
    double n,maxn;
    while(scanf("%lf",&n)!=EOF){
    maxn=0;
    if(n >=71064){
        printf("1.64492\n");
        break;
    }
    if(n >= 245589){
        printf("1.64493\n");
        break;
    }
    for(int i=1;i<=n;i++)
       maxn+=a/(i*i);
    printf("%.5lf\n",maxn);
    }
    return 0;
}