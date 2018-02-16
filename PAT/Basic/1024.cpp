#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 1000100
using namespace std;
string S;
bool f1 = true,f2 = true;
int ans = 0,x;
int main()
{
    cin>>S;
    if(S[0] == '-')
        f1 = false;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i] == 'E')
        {
             x = i - 1;
             if(S[i+1] == '-')
                f2 = false;
            for (int j = i + 2; j < S.size(); j++)
                ans = ans * 10 + (S[j] - '0');
            break;
        }
    }
    if(!f1)
        cout<<"-";
    if(ans == 0)
        cout<<S;
    else
    if(!f2)
    {   
        cout<<"0.";
        for (int i = 1; i <= ans - 1; i++)
            cout<<"0";
        for (int i = 1; i <= x; i++)
            if(S[i] != '.')
                cout<<S[i];
    }
    else
    {
        for (int i = 1; i <= x; i++)
            if(S[i] != '.')
                cout<<S[i];
        for (int i = 1; i <= ans + 1 - x; i++)
            cout<<"0";
    }
    cout<<endl;
    return 0;
}