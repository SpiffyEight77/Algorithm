#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn = 100000;
long long x,y,Max;
bool f;
int main()
{
    cin>>x;
    Max = 0;
    f = false;
    for (long long i = 1; i <= x; i++)
    {
        y = i * i;
        if(y > x)
        {
            cout<<Max<<endl;
            f = true; 
            break;
        }
        else
            if(y >= Max)
                Max = y;
    }
    if(!f)
        cout<<Max<<endl;
    return 0;
}