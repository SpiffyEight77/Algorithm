#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define ans 1000000
using namespace std;
const int maxn = 100000;
string S;
int cnt;
bool f;
int main()
{
    while(cin>>S)
    {
        f = false;
        cnt = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if(S[i] != '0')
            {
                for (int j = i+1; j < S.size(); j++)
                {
                    if(S[j] == '1')
                    {
                        cnt++;
                        S[j] = '0';
                    }
                }
                f = true;
            }
            if(f)
                break;
        }
        if(S.size() - cnt >= 7)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}