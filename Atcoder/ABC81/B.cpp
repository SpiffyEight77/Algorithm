#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int n,a[1010],minn,cnt;
int main()
{
    cin>>n;
    minn = Mod;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        while(a[i] % 2 == 0)
        {
            cnt++;
            a[i]/=2;
        }
        minn = min(minn,cnt);
    }
    cout<<minn<<endl;
    return 0;
}