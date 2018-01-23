#include<cstdio>
#include<iostream>
using namespace std;
string S;
int main()
{
    cin>>S;
    cout<<(S[0] == S[2] ? "Yes" : "No")<<endl;
    return 0;
}