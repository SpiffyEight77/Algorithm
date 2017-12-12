#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int a,b,c,p = -1;
int main()
{
    cin>>a>>b>>c;
    for (int i = 1; i < Maxn; i++)
    {
        a*=10;
        if(a / b == c)
        {
            p = i;
            break;
        }
        a%=b;
    }
    cout<<p<<endl;
    return 0;
}