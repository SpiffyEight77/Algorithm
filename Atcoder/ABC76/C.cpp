#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
string S,T,tmp,res;
bool f;
int main()
{
    cin>>S>>T;
    res = "";
    if(T.size() > S.size())
    {
        cout<<"UNRESTORABLE"<<endl;
        return 0;
    }

    for (int i = 0; i <= S.size() - T.size(); i++)
    {
        f = true;
        tmp = S;
        for (int j = 0; j < T.size(); j++)
        {
            if(tmp[i + j] != '?' && tmp[i + j] != T[j])
            {
                f = false;
                break;
            }
            tmp[i + j] = T[j];
        }
        if(f == true)
            res = tmp;
    }
    if(res != "")
    {
        for (int i = 0; i < S.size(); i++)
            if(res[i] == '?')
                res[i] = 'a';
        cout<<res<<endl;
    }
    else
        cout<<"UNRESTORABLE"<<endl;
    return 0;
}