#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string S;
int a[27],cnt,cnta;
int main()
{
    while(cin>>S)
    {
        cnt = 0;
        cnta = 0;
        memset(a,0,sizeof(a));
        if(S.size() < 26)
        {
            printf("-1\n");
            continue;
        }
        for (int i = 0; i < S.size(); i++)
            if(S[i] >= 'A' && S[i] <= 'Z')
                a[S[i] - 'A'] = 1;
            else
                if(S[i] == '?')
                    cnt++;
        for (int i = 0; i < 27; i++)
            if(a[i])
                cnta++;
    
            for (int i = 0; i < S.size(); i++)
                if(S[i] == '?')
                    for (int j = 0; j < 26; j++)
                        if(a[j] == 0)
                        {
                            S[i] = j + 'A';
                            a[j] = 1;
                            cnta++;
                            break;
                        }
        if(cnta < 26)
            printf("-1\n");
        else
            cout<<S<<endl;               
    }
    return 0;
}