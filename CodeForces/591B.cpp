#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 200010;
int n,m;
string S;
char a,b,t,c[1010];
int main()
{
    cin>>n>>m;
    cin>>S;
    for (int i = 0; i < 26; i++)
        c[i] = i + 'a';
    while(m--)
    {
        cin>>a>>b;
        for (int i = 0; i < 26; i++)
        {
            if(c[i] == a)
            {    
                c[i] = b;
                continue;
            }
            if(c[i] == b)
                c[i] = a;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%c",c[S[i]-'a']);
    cout<<endl;
    return 0;
}