#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
string S;
int a[11] = {0};
int main()
{
    cin>>S;
    for (int i = 0; i < S.size(); i++)
        a[S[i] - '0'] ++;
    for (int i = 0; i <= 9; i++)
        if(a[i])
            cout<<i<<":"<<a[i]<<endl;
    return 0;
}