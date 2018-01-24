// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// #include<cmath>
// #define Mod 1000000000 + 7
// #define Maxn 1000000 + 100
// typedef long long ll;
// typedef long double ld;
// using namespace std;
// bool cmp(int x,int y)
// {
//     return x < y;
// }

// int gcd(int x,int y)
// {
//     return 0;
// }
 
// ll quick_mod()
// {
//     return 0;
// }
// int n,k,x,ans,a[Maxn];
// int main()
// {
//     ans = Mod;
//     cin>>n>>k;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>x;
//         if(k % x == 0)
//             ans = min(k / x,ans);
//     }
//     cout<<ans<<endl;
//     return 0;
// }


#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int n,k,x,ans = 999;
int main()
{
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(k % x == 0)
            ans = min(ans,k / x);
    }
    cout<<ans<<endl;
    return 0;
}