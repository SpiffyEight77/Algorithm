#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,cnt = 0;
long long p,a[Maxn];
int main()
{
    cin>>n>>p;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    sort(a,a+n);
    for (int i = 0; i < n; i++)
        for (int j = i + cnt; j < n; j++)
            if(a[i] * p < a[j])
                break;
            else
                if(j - i + 1 > cnt)
                    cnt = j - i + 1; 
    cout<<cnt<<endl;
    return 0;
}