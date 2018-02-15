#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 1000100
using namespace std;
int x,k = 0,a[Maxn];
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin>>x;
        for (int j = 1; j <= x; j++)
            a[k++] = i;
    }
    if(a[0] == 0)
        for (int i = 1; i < k; i++)
            if(a[i] != 0)
            {
                swap(a[0],a[i]);
                break;
            }
    for (int i = 0; i < k; i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}