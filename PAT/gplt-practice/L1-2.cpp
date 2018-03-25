#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
int hh,mm,t;
int main()
{
    scanf("%d:%d",&hh,&mm);
    if(hh <= 12 && hh >= 0)
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
    else
        if(mm > 0)
            t = hh - 12 + 1;
    else
        t = hh - 12;

    for (int i = 0; i < t; i++)
        cout<<"Dang";
    cout<<endl;
    return 0;
}