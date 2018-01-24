// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// #include<cmath>
// #define Mod 1000000000 + 7
// #define Maxn 1000000 + 100
// using ll = long long;
// using ld = long double;
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
// ll a,b,x,y,z,ans,xx,yy;
// int main()
// {
//     cin>>a>>b;
//     cin>>x>>y>>z;
//     xx = x * 2 + y - a;
//     yy = y + 3 * z - b;
//     if(xx <= 0 && yy <= 0)
//         cout<<"0"<<endl;
//     else
//         if(xx >= 0 && yy <= 0)
//             cout<<xx<<endl;
//     else
//         if(xx <= 0 && yy >= 0)
//             cout<<yy<<endl;
//     else
//         cout<<xx+yy<<endl;
//     return 0;
// }


#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long yellow,blue,a,b,x,y,z;
int main()
{
    cin>>yellow>>blue;
    cin>>x>>y>>z;
    a = x * 2 + y;
    b = y + 3 * z;
    cout<< max(0LL,a - yellow) + max(0LL,b - blue)<<endl;
    return 0;
}

// yellow 2y 
// green 1y 1b
// blue 3b