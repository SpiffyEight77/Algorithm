#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string S;
int n,cntr,cntb,ans1,ans2;
int main()
{
    while(cin>>n)
    {
        cin>>S;
        cntr = 0;
        cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(S[i] != 'b')
                    cntb ++;
            }
            else
                if(S[i] != 'r')
                    cntr ++;
        }  
        ans1 = min(cntb,cntr) + abs(cntr-cntb);

        cntr = 0;
        cntb = 0;
        for (int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(S[i] != 'r')
                    cntr ++;
            }
            else
                if(S[i] != 'b')
                    cntb ++;
        }  
        ans2 = min(cntb,cntr) + abs(cntr-cntb);

        cout<<min(ans2,ans1)<<endl;
    }
    return 0;
}