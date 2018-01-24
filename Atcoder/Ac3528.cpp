#include<iostream>
#include<cstdio>
using namespace std;
string S;
int main()
{
    cin>>S;
    cout<<( (S[0] == '9' || S[1] == '9') ? "Yes" : "No" )<<endl;
    return 0;
}