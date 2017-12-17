// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// const int Maxn = 100100;
// const int Mod = 1000000000 + 7;
// int n,cnt,k,a[Maxn],m1[50]={0,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
// int m2[50]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
// bool f = false;
// int main()
// {
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//         if(a[i] == 29)
//             f = true;
//     }
    

//     for (int i = 1; i <= 48; i++)
//     {
//         cnt = 0;
//         if(a[0] == m1[i] && f == true)
//         {
//             // cnt = 1;
//             cnt++;
//             k = 1;
//             for (int j = i+1; j<=48; j++)
//             {
//                 if(a[k++] != m1[j])
//                     break;
//                 cnt++;
//             }
//         }

//         if(a[0] == m2[i] && f == false)
//         {
//             // cnt = 1;
//             cnt++;
//             k = 1;
//             for (int j = i+1; j<=48; j++)
//             {
//                 if(a[k++] != m2[j])
//                     break;
//                 cnt++;
//             }
//         }

//         if(cnt == n)
//                 break;
//     }

//     //cout<<cnt<<endl;
//     if(cnt == n)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
//     return 0;
// }

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
const int Mod = 1000000000 + 7;
int n,cnt,k,a[Maxn];
//int m1[50]={0,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int m2[50]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int m3[50]={0,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int m4[50]={0,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};

bool f = false;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        // if(a[i] == 29)
        //     f = true;
    }
    

    for (int i = 1; i <= 48; i++)
    {
        // cnt = 0;
        // if(a[0] == m1[i])
        // {
        //     // cnt = 1;
        //     cnt++;
        //     k = 1;
        //     for (int j = i+1; j<=48; j++)
        //     {
        //         if(a[k++] != m1[j])
        //             break;
        //         cnt++;
        //     }
        // }

        // if(cnt == n)
        //         break;

        cnt = 0;

        if(a[0] == m2[i])
        {
            // cnt = 1;
            cnt++;
            k = 1;
            for (int j = i+1; j<=48; j++)
            {
                if(a[k++] != m2[j])
                    break;
                cnt++;
            }
        }

        cnt = 0;

        if(cnt == n)
                break;

        if(a[0] == m3[i])
        {
            // cnt = 1;
            cnt++;
            k = 1;
            for (int j = i+1; j<=48; j++)
            {
                if(a[k++] != m3[j])
                    break;
                cnt++;
            }
        }

        cnt = 0;

        if(cnt == n)
                break;

        if(a[0] == m4[i])
        {
            // cnt = 1;
            cnt++;
            k = 1;
            for (int j = i+1; j<=48; j++)
            {
                if(a[k++] != m4[j])
                    break;
                cnt++;
            }
        }

        if(cnt == n)
                break;
    }

    //cout<<cnt<<endl;
    if(cnt == n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}