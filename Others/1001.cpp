#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int t;
  double n,tt;
  scanf("%d",&t);
  while(t--){
      double maxx=99999999;
      scanf("%lf",&n);
      for(int a=0;a<9;a++){
          for(int b=0;b<9;b++){
              for(int c=0;c<9;c++){
                  for(int d=0;d<9;d++){
                    double maxn=pow(2.0,a*1.0)*pow(3.0,b*1.0)*pow(5.0,c*1.0)*pow(7.0,d*1.0);
                       if(maxn-n>=0 && maxn-n<maxx){
                       maxx=maxn-n;
                       tt=maxn;
                       }
                  }
              }
          }
      }
      printf("%0.lf\n",tt);
  }
  return 0;
}