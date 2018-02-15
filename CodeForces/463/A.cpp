#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 1000100
using namespace std;
string S;
int l;
int main()
{
    cin>>S;
    cout<<S;
    for (int i = S.size() - 2; i >= 0; i--)
        cout<<S[i];
    cout<<endl;
    return 0;
}