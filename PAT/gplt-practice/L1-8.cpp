#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
int n,dd,hh,mm;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>dd;
        scanf("%d:%d",&hh,&mm);
        if(dd == 0)
            printf("%d %02d:%02d",dd,hh,mm);
        else
        {
            
            hh = (dd - 1) * 24 + hh;
            mm = (hh % 2) * 60 + mm;

            if(dd % 2 == 0)
                dd = dd / 2;
            else
                dd = dd / 2 + 1;
                
            printf("%d %02d:%02d",dd,hh / 2,mm / 2); 
        }
        cout<<endl;
    }
    return 0;
}