#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define Mod 1000000000 + 7
#define Maxn 1000000 + 100
typedef long long ll;
using namespace std;
bool cmp(int x,int y)
{
    return x < y;
}

int gcd(int x,int y)
{
    return 0;
}

ll quick_mod()
{
    return 0;
}
string S;
int a,b;
bool f;
int main()
{
    cin>>a>>b;
    cin>>S;
    f = true;
    for (int i = 0; i < S.size(); i++)
        if(i == a && S[a] != '-')
        {
            f = false;
            break;
        }
        else
            if( (S[i] < '0' || S[i] > '9') && i != a )
            {
                f = false;
                break;
            }
    if(!f)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;
}