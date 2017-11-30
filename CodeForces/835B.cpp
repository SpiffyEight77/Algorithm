#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int Maxn = 1000100;
char S[Maxn];
int n,k,ans,r,l;
int main()
{
    ans = 0;
    n = 0;
    cin>>k;
    cin>>S;
    l = strlen(S);
    for (int i = 0; i < l; i++)
        ans+=(S[i] - '0');
    if(ans >= k)
    {
        cout<<"0"<<endl;
        return 0;
    }
    r = k - ans;
    sort(S,S+l);
    for (int i = 0; i < l; i++)
    {
        if(r <= 0)
            break;
        if( (S[i] - '0') < 9 )
        {
            r = r - (9 - (S[i] - '0') );
            n++; 
        }
    }
    cout<<n<<endl;
    return 0;
}