#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100010;
string S;
int ans,L,R,U,D;
int main()
{
    cin>>S;
    ans = 0;
    L = 0;
    R = 0;
    U = 0;
    D = 0;
    if(S.size() % 2!= 0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for (int i = 0; i < S.size(); i++)
        if(S[i] == 'R')
            R++;
        else
            if(S[i] == 'L')
                L++;
        else
            if(S[i] == 'D')
                D++;
        else
            if(S[i] == 'U')
                U++;
    
    ans = abs(U-D) + abs(L-R);
    cout<<ans/2<<endl;
    return 0;
}