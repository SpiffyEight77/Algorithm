#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
const int Mod = 1000000000 + 7;
int n,cnt,k,a[Maxn];
int m[50] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
bool f;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    for (int i = 0; i < 50; i++)
    {
        f = true;
        for (int j = 0; j < n; j++)
            if(a[j] != m[(i+j)%48])
            {
                f = false;
                break;
            }
        if(f)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}