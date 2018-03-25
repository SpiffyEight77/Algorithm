#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#define Maxn 100000;
using namespace std;
char n[22],a[30],b[30],s[22];
int x[30],y[30],d,l;
bool f = true;
int main()
{
    cin>>n;
    getchar();
    cin>>a>>b;

    l = strlen(n);

    for (int i = strlen(a) - 1,j = 0; i >= 0; i--)
        x[j++] = a[i] - '0';
    for (int i = strlen(b) - 1,j = 0; i >= 0; i--)
        y[j++] = b[i] - '0';
    for (int i = l - 1,j = 0; i >= 0; i--)
        s[j++] = n[i];

    for (int i = 0; i <= 22; i++)
    {

         d = x[i] + y[i];

        if(s[i] == 'd' || s[i] == '0')
        {
            if(d >= 10)
            {
                d -= 10;
                x[i+1] ++;
            }
            x[i] = d;
        }
        else
        {
            if(d >= s[i] - '0')
            {
                x[i+1] = x[i+1] + d / (s[i] - '0');
                d = d % (s[i] - '0');
            }
            x[i] = d;
        }
    }

    for (int i = 22; i >= 0; i--)
        if(x[i] != 0)
            f = false;
    if(f == true)
        cout<<"0";
    else
    for (int i = 22; i >= 0; i--)
        if(x[i] != 0)
        {
            for (int j = i; j >= 0; j--)
                printf("%d",x[j]);
            break;
        }
    cout<<endl;
    return 0;
}