#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string S;
int a[27],cnt,cnta,p;
bool f;
int main()
{
    while(cin>>S)
    {
        cnt = 0;
        cnta = 0;
        
        if(S.size() < 26)
        {
            printf("-1\n");
            continue;
        }

        for (int i = 0; i <= S.size() - 26; i++)
        {
            memset(a,0,sizeof(a));
            f = true;
            for (int j = i; j < i + 26; j++)
                if(S[j] == '?')
                    continue;
                else
                    if(S[j] >= 'A' && S[j] <= 'Z')
                    {
                        a[S[j] - 'A'] ++;
                        if(a[S[j] - 'A'] > 1)
                        {
                            f = false;
                            break;
                        }
                    }
            p = i;
            if(f == true)
                break;
        }
        
        if(f == true)
        {
            for (int j = p; j < p + 26; j++)
                if(S[j] == '?')
                    for (int k = 0; k < 26; k++)
                        if(a[k] == 0)
                        {
                            S[j] = k + 'A';
                            a[k] = 1;
                            break;
                        }
            for (int i = 0; i < S.size(); i++)
                if(S[i] == '?')
                    S[i] = 'A';
            cout<<S<<endl;
        }
        else
            cout<<"-1"<<endl;
    }
    return 0;
}