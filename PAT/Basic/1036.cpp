#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,k;
char c;
int main()
{
    scanf("%d %c",&n,&c);
    k = (0.5 +  (double) n / 2.0 );
    for (int i = 1; i <= k; i++)
    {
        if(i == 1 || i == k)
        {
            for (int j = 1; j <= n; j++)
                cout<<c;
            cout<<endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
                if(j == 1 || j == n)
                    cout<<c;
                else
                    cout<<" ";
            cout<<endl;
        }

    }
    return 0;
}