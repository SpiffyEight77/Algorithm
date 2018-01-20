// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<cmath>
// #include<algorithm>
// #define Maxn 1000000 + 7
// using namespace std;
// int n,cnt,a[Maxn];
// int main()
// {
//     cin>>n;
//     for (int i = 0; i < n; i++)
//         cin>>a[i];
//     sort(a,a+n);
//     cnt = 1;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if(a[i] == a[n-1])
//             cnt++;
//         else
//             if(a[i] != a[n-1])
//                 break;
//     }
//     if(cnt % 2 == 0)
//         cout<<"Agasa"<<endl;
//     else
//         cout<<"Conan"<<endl;
//     return 0;
// }

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 1000000 + 7
using namespace std;
int n,x,cnt,a[Maxn];
int main()
{
    memset(a,0,sizeof(a));
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a[x] ++;
    }
    if(cnt % 2 == 0)
        cout<<"Agasa"<<endl;
    else
        cout<<"Conan"<<endl;
    return 0;
}