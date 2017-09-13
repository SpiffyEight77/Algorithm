#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a=1.0;
    double n,maxn,j=1;
    for(int k=1;k<=1000000;k++){
    maxn=0;
    for(int i=1;i<=k;i++)
       maxn+=a/pow((i*1.0),2.0);
    printf("%0.lf  %.8lf\n",j++,maxn);
    }
    return 0;
}