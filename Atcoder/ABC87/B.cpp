#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int a,b,c,x,ans;
int main()
{
    ans = 0;
    cin>>a>>b>>c>>x;
    for (int i = 0 ; i <= a; i++)
        for (int j = 0; j <= b; j++)
            for (int k = 0; k <= c; k++)
                if(i * 500 + j * 100 + k * 50 == x)
                    ans++;
    cout<<ans<<endl;
    return 0;
}