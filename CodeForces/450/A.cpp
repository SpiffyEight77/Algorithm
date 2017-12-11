#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100000;
const int Mod = 1000000000 + 7;
int n,x[Maxn],y[Maxn],l,r;
int main()
{
    cin>>n;
    l = 0;
    r = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x[i]>>y[i];
        if(x[i] > 0 && y[i] > 0)
            r++;
        
        if(x[i] > 0 && y[i] < 0)
            r++;
        
        if(x[i] < 0 && y[i] < 0)
            l++;

        if(x[i] < 0 && y[i] > 0)
            l++;
    }
    if( (r  > 0 && l - 1 == 0) || (l  > 0 && r - 1 == 0) || (r - 1 > 0 && l == 0) || (l - 1 > 0 && r == 0)) 
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}