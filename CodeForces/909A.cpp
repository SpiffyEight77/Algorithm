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
// string sf,sl,s = "zzzzzzzzzz";
// int main()
// {
//     cin>>sf>>sl;
//     for (int i = 0; i < sf.size(); i++)
//         for (int j = 0; j < sl.size(); j++)
//             s = min(s,sf.substr(0,i+1)+sl.substr(0,j+1));
//     cout<<s<<endl;
//     return 0;
// }


#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
string S,S2,t = "zzzzzzzzzz";
int main()
{
    cin>>S>>S2;
    for (int i = 0; i < S.size(); i++)
        for (int j = 0; j < S2.size(); j++)
            t = min(t,S.substr(0,i + 1) + S2.substr(0,j + 1));
    cout<<t<<endl;
    return 0;
}