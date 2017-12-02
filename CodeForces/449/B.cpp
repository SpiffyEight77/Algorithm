#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
string S;
int l,n,x,y;
char a,b;
int main()
{
    cin>>l>>n;
    cin>>S;
    while(n--)
    {
        cin>>x>>y>>a>>b;
        for (int i = x+1; i <= y+1; i++)
            if(S[i] == a)
                S[i] = b;
    }
    cout<<S<<endl;
    return 0;
}