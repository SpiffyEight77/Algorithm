#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#define Maxn 100010
using namespace std;
string a,b;
int l,tmp,A[110],B[110];
char res[110],c[14] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
int main()
{
    cin>>a>>b;
    for (int i = a.size() - 1,j = 1; i >= 0; i--)
        A[j++] = a[i] - '0';

    for (int i = b.size() - 1,j = 1; i >= 0; i--)
        B[j++] = b[i] - '0';

    for (int i = b.size() - 1,j = 1; i >= 0; i--)
        res[j++] = b[i];

    for (int i = 1; i <= max(a.size(),b.size()); i++)
    {
        if(i % 2 == 1)
        {
            tmp = A[i] + B[i];
            res[i] = c[tmp%13]; 
        }
        if(i % 2 == 0)
        {
            tmp = B[i] - A[i];
            if(tmp < 0)
                res[i] = c[tmp + 10];
            else
                res[i] = c[tmp];
        }
    }
    for (int i = max(a.size(),b.size()); i >= 1; i--)
        cout<<res[i];
    cout<<endl;
    return 0;
}