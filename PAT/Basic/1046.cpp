#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,p1,p2,h1,h2,b1,b2;
int main()
{
    cin>>n;
    p1 = 0; p2 = 0;
    while(n--)
    {
        cin>>h1>>b1>>h2>>b2;
        if( (b1 == h1 + h2 && b2 == h1 + h2) || (b1 != h1 + h2 && b2 != h1 + h2) )
            continue;
        else
            if(b1 == h1 + h2)
                p2++;
        else
            if(b2 == h1 + h2)
                p1++;
    }
    cout<<p1<<" "<<p2<<endl;
    return 0;
}