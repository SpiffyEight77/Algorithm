#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 1000100
using namespace std;
string S;
bool f = true;
int ans = 0,x;
int main()
{
    cin>>S;
    if(S[0] == '-')
        cout<<"-";
    for (int i = 1; i < S.size(); i++)
    {
        if(S[i] == 'E')
        {
             x = i - 1;
             if(S[i+1] == '-')
                f = false;
            for (int j = i + 2; j < S.size(); j++)
                ans = ans * 10 + (S[j] - '0');
            break;
        }
    }
    if(f == false)
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
        if(ans >= x - 2)
        {
            for (int i = 1; i <= x; i++)
                if(S[i] != '.')
                    cout<<S[i];
            for (int i = 1; i <= ans + 2 - x; i++)
                cout<<"0";
        }
        else
        {
            cout<<S[1];
            for (int i = 3; i < 3 + ans; i++)
                cout<<S[i];
            cout<<".";
            for (int i = 3 + ans; i <= x; i++)
                cout<<S[i];
        }
    }
    cout<<endl;
    return 0;
}