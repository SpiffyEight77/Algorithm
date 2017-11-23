#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
int n,c,a[Maxn];
bool f;
int main()
{
    cin>>n;
    f = true;
    for (int i = 1; i <= n; i++)
        cin>>a[i];
    for (int i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            if(a[i] == 3)
            {
                f = false;
                break;
            }
            else
                c = 3;
        }
        else
        {
            if(a[i] != a[i-1] && a[i] != c)
            {
                f = false;
                break;
            }
            if(a[i] == 1 && c == 2)
                c = 3;
            else
                if(a[i] == 1 && c == 3)
                    c = 2;
            else
                if(a[i] == 2 && c == 1)
                    c = 3;
            else
                if(a[i] == 2 && c == 3)
                    c = 1;
            else
                if(a[i] == 3 && c == 1)
                    c = 2;
            else
                if(a[i] == 3 && c == 2)
                    c = 1;
        }
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}