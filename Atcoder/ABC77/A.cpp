#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn = 100000;
int n;
bool f;
char S[4][4];
int main()
{
    memset(S,0,sizeof(S));
    f = false;
    for (int i = 0; i < 2; i++)
        scanf("%s",S[i]);
    if( (S[0][0] != S[1][2]) || (S[0][2] != S[1][0]) || (S[0][1] != S[1][1]))
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}