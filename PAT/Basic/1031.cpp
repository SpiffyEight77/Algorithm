#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
int n,ans,cnt = 0,val[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char z[12] = "10X98765432";
string S;
bool check;
int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        ans = 0;
        check = true;
        cin>>S;
        for (int j = 0; j < 17; j++)
        {
            if(S[j] >= '0' && S[j] <= '9')
                ans = ans + (S[j] - '0') * val[j];
            else
            {
                check = false;
                break;
            }
        }

        if(check == false || z[ans%11] != S[17])
            cout<<S<<endl,cnt++;
    }   
    if(cnt == 0)
        cout<<"All passed"<<endl;
    return 0;
}