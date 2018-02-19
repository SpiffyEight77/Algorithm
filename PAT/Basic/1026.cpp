#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int c1,c2,k;
int main()
{
    cin>>c1>>c2;
    k =( 0.5 + (double) (c2 - c1) / 100 );
    printf("%02d:%02d:%02d\n",k/3600,k/60%60,k%60);
    return 0;
}