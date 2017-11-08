#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int n,a,b;
int main()
{
    while(cin>>n)
    {
        scanf("%d:%d",&a,&b);
        if(n == 24)
        {
            if(a >= 24)
                a %= 10;        
        }
        else
        {
            if(a > 12)
                a %= 10;
            if(a == 0 && n == 12)
                a = 10;
            if(a == 0)
                a++;
        }
        if(b >= 60)
            b %= 10;
        printf("%02d:%02d\n",a,b);
    }
    return 0;
}