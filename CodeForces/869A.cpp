#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 2000000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}
int n,res,x[Maxn],y[Maxn],a[Maxn];
int main()
{
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
        a[x[i]] = 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>y[i];
        a[y[i]] = 1;
    }

    res = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(a[x[i]^y[j]] == 1)
                res++;
    cout<<(res % 2 ? "Koyomi":"Karen")<<endl;
    return 0;
}

// 001
// 100
// 101
// 5

// 001
// 101
// 100
// 4

// 010
// 100
// 110
// 6

