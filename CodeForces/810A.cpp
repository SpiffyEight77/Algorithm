#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#define Maxn 100000
using namespace std;
int n,k,cnt,a[Maxn];
double ave;
int main()
{
    cin>>n>>k;
    ave = 0;
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ave+=a[i];
    }

    if(round(ave/n) >= k)
        cout<<"0"<<endl;
    else
        for (int i = 1; ; i++)
        {
            ave += k;
            cnt++;
            if(round(ave / (n+cnt) ) >= k) 
            {
                cout<<cnt<<endl;
                break;
            }
        }
    return 0;
}