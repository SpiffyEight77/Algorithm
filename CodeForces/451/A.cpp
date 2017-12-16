#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
const int Maxn = 100000 + 100;
const int Mod = 1000000000 + 7;
int n,l;
string S;
bool f = false;
// int main()
// {
//     cin>>S;
//     n = 0;
//     l = S.size();
//     if(S[l-1] - '0' >= 5)
//     {
//         n = 1;
//         S[l-1] = '0';
//     }
//     else
//         S[l-1] = '0';

//     for (int i = l-2; i >= 0; i--)
//     {
//         if( S[i] - '0' + n == 10)
//             S[i] = '0';
//         else
//         {
//             S[i] = S[i] - '0' + n + '0';
//             n = 0;
//             break;
//         }
//     }

//     if(n)
//         cout<<n;
//     cout<<S<<endl;
//     return 0;
// }
int main()
{
    cin>>n;
    if(n % 10 < 5)
        cout<<n-n%5<<endl;
    else
        cout<<n+(10-n%10)<<endl;
    return 0;
}