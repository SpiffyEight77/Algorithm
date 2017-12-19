#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
#define Mod 1000000000 + 7
#define Maxn 100000 + 100
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

int n,num;
string s,ss;
int main()
{
    cin>>n;
    map<string,set<string> > mps;
    for (int i = 0; i < n; i++)
    {
            cin>>s>>num;
            for (int j = 0; j < num; j++)
            {
                cin>>ss;
                mps[s].insert(ss);
            }
    }

    cout<<mps.size()<<endl;

    


    

    return 0;
}