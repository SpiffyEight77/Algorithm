#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define Maxn 100001
using namespace std;
int t = 1,n,l,r,k;
int main()
{
    cin>>t;
    while(t--)
    {
        k = 1;
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin>>l>>r;
            if(k <= l)
            {
                cout<<l<<" ";
                k = l + 1;
            }
            else
                if(k <= r)
                    cout<<k++<<" ";
            else
                cout<<"0"<<" ";
        }
       cout<<endl;
    }
    return 0;
}