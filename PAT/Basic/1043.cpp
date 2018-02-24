#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
string S;
int ascii[128];
int main()
{
    cin>>S;
    for (int i = 0; i < S.size(); i++)
        ascii[S[i]]++;
    //printf("%d %d %d %d %d %d\n",'P','A','T','e','s','t');
    while(1)
    {
        if(ascii[80] == 0 && ascii[65] == 0 && ascii[84] == 0 && ascii[101] == 0 && ascii[115] == 0 && ascii[116] == 0)
            break;
        if(ascii[80])
        {
            printf("%c",80);
            ascii[80]--;
        }
        if(ascii[65])
        {
            printf("%c",65);
            ascii[65]--;
        }
        if(ascii[84])
        {
            printf("%c",84);
            ascii[84]--;
        }
        if(ascii[101])
        {
            printf("%c",101);
            ascii[101]--;
        }
        if(ascii[115])
        {
            printf("%c",115);
            ascii[115]--;
        }
        if(ascii[116])
        {
            printf("%c",116);
            ascii[116]--;
        }
    }
    cout<<endl;
    return 0;
}