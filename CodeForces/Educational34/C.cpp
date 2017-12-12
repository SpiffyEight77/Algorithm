#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int n,ans,x,res,k,y,maxnn,cnt[Maxn],a[Maxn];
bool f;
int main()
{
    ans = 1;
    maxnn = 1;
    k = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    sort(a,a+n);

    for (int i = 0; i < n; i++)
    {
        if(a[i] == a[i+1])
            ans++;
        else
        {
            maxnn = max(ans,maxnn);
            ans = 1;
        }
    }
    
    cout<<maxnn<<endl;
    return 0;
}