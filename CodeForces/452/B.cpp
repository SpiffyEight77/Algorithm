#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100100;
const int Mod = 1000000000 + 7;
int n,cnt,k,a[Maxn];
int m[50] = {0,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31};
bool f;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < 50; i++)
    {  
        if(a[0] == m[i])
        {
            cnt = 1;
            for (int j = i+1,k = 1; j < 50; j++)
            {
                if(a[k++] != m[j])
                    break;
                cnt++;
                if(cnt == n)
                    break;
            }
        }
        if(cnt == n)
            break;
    }

    //cout<<cnt<<endl;

    if(cnt == n)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}

// int main()
// {
//     cin>>n;
//     for (int i = 0; i < n; i++)
//         cin>>a[i];
    
//     for (int i = 0; i < 50; i++)
//     {
//         f = true;
//         for (int j = 0; j < n; j++)
//             if(a[j] != m[i+j])
//             {
//                 f = false;
//                 break;
//             }
//         if(f)
//         {
//             cout<<"Yes"<<endl;
//             return 0;
//         }
//     }
//     cout<<"No"<<endl;
//     return 0;
// }