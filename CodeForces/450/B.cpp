#include<cstdio>
#include<iostream>
#include <stdlib.h>  
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 100500;
const int Mod = 1000000000;
int x,y,k,b;
double a,c;
char s[Maxn];
bool f;
int main()
{
    cin>>a>>b>>c;
    //cout<<a<<endl;

    sprintf(s, "%.15lf", a/b);
    string result = s;

    // cout<<s<<endl;
    // for (int i = 0; i < 6; i++)
    //     cout<<result[i];
    // cout<<endl;

    for (int i = 0; i < result.size(); i++)
        if(result[i] != result[i-1] && i == result.size() - 1)
            result[i] = result[i-1];

    //cout<<result<<endl;

    for (int i = 0; i < result.size(); i++)
    {
        if(result[i] == '.')
            for (int j = i + 1; j < result.size(); j++)
            {
                if(result[j] - '0' ==  c)
                {
                    cout<<j - i<<endl;
                    f = true;
                    break;
                }
            }
            if(f)
                break;
    }
    
    if(!f)
        cout<<"-1"<<endl;
    return 0;
}