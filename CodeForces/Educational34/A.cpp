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
int n,x,y,ans;
bool f;
int main()
{   
    cin>>n;
    while(n--)
    {
        f = false;
        cin>>x;
        for (int i = 0; i <= 100; i++)
        {
            for (int j = 0; j <= 100; j++)
            {
                if(i * 3 + j * 7 == x)
                {
                    f = true;
                    break;
                }  
            }
            if(f)
                break;
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}