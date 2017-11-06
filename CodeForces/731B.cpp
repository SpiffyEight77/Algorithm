#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
const int Maxn = 200100;
using namespace std;
int n,a[Maxn];
bool f;
int main()
{
    while(cin>>n)
    {
        f = true;
        for (int i = 0; i < n; i++)
            cin>>a[i];
        for (int i = 0; i < n; i++)
        {
            if(a[i] < 0)
            {
                f = false;
                break;
            }
            else
                if(a[i] % 2 == 0)
                    continue;
            else
                if(a[i] - 1 == 0)
                    a[i+1] -= 1;
            else
            {
                f = false;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}