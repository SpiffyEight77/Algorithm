#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
typedef long long ll;
int n,ans,res;
int main()
{
    cin>>n;
    ans = 0;
    res = n;
    while(n)
    {
        ans+=n%10;
        n/=10;
    }
    if(res % ans == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}