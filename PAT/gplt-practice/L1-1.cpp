#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
char S[1100];
char s[110][110];
int n,l,k = 0;
int main()
{
    cin>>n;
    getchar();
    gets(S);

    cout<<S<<endl;

    if(strlen(S) % n != 0)
        l = strlen(S) / n + 1;
    else
        l = strlen(S) / n;
    
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= l; j++)
            s[i][j] = '\0';

    for (int i = l; i >= 1; i--)
        for (int j = 1; j <= n; j++)
            s[j][i] = S[k++];


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l; j++)
            printf("%c",s[i][j]);
        printf("\n");
    }
    return 0;
}