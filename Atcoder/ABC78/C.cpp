#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int Maxn = 100010;
int N,M,ans,t;
int main()
{
    cin>>N>>M;
    ans = (100 * (N - M) + 1900 * M) * pow(2,M);   
    cout<<ans<<endl;
    return 0;
}