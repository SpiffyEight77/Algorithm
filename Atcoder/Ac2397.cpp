#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 100000;
string S1,S2,S3;
int main()
{
    cin>>S1;
    cin>>S2;
    cin>>S3;
    printf("%c%c%c\n",S1[0] - 'a' + 'A',S2[0] - 'a' + 'A',S3[0] - 'a' + 'A');
    return 0;
}